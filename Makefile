# run `make all` to compile the .hhk and .bin file, use `make` to compile only the .bin file.
# The .hhk file is the original format, the bin file is a newer format.
APP_NAME:=snek

ifndef SDK_DIR
$(error You need to define the SDK_DIR environment variable, and point it to the sdk/ folder)
endif

AS:=sh4aeb-elf-gcc
AS_FLAGS:=-DAPPNAME_STRING=\"$(APP_NAME)\"

COMMON_FLAGS:=-flto -ffunction-sections -fdata-sections -ffreestanding -fshort-wchar -O2 -m4a-nofpu -DAPPNAME_STRING=\"$(APP_NAME)\" -DUSE_MALLOC_STACK
# add tis to debug :  -DDEBUG_EXPRESSIONS -DDEBUG_LEXER
INCLUDES:=-I $(SDK_DIR)/include/
WARNINGS:=-Wall -Wextra

CC:=sh4aeb-elf-gcc
CC_FLAGS:=$(COMMON_FLAGS) $(INCLUDES) $(WARNINGS)

CXX:=sh4aeb-elf-g++
CXX_FLAGS:=-fno-exceptions -nostdinc++ -fno-rtti -Wno-write-strings $(COMMON_FLAGS) $(INCLUDES) $(WARNINGS) -fpermissive

LD:=sh4aeb-elf-gcc
LD_FLAGS:=-nostartfiles -m4a-nofpu -Wl,--gc-sections $(WARNINGS) $(COMMON_FLAGS) -L$(SDK_DIR)

READELF:=sh4-elf-readelf
OBJCOPY:=sh4-elf-objcopy

SOURCEDIR = src
BUILDDIR = obj
OUTDIR = dist
BINDIR = $(OUTDIR)/$(APP_NAME)/bin

APP_ELF:=$(OUTDIR)/$(APP_NAME).elf
APP_BIN:=$(OUTDIR)/$(APP_NAME).bin

AS_SOURCES:=$(shell find $(SOURCEDIR) -name '*.S')
CC_SOURCES:=$(shell find $(SOURCEDIR) -name '*.c')
CXX_SOURCES:=$(shell find $(SOURCEDIR) -name '*.cpp')
OBJECTS := $(addprefix $(BUILDDIR)/,$(AS_SOURCES:.S=.o)) \
	$(addprefix $(BUILDDIR)/,$(CC_SOURCES:.c=.o)) \
	$(addprefix $(BUILDDIR)/,$(CXX_SOURCES:.cpp=.o))

SNEK_ROOT = $(SOURCEDIR)/pvm

SNEK_BUILTINS = \
	$(SNEK_ROOT)/snek-keyword.builtin \
	$(SNEK_ROOT)/snek-base.builtin \
	$(SNEK_LOCAL_BUILTINS)


SNEK_DEBUG = 1

bin: $(APP_BIN) Makefile

hhk: $(APP_ELF) Makefile

snek-builtin.h: $(SNEK_ROOT)/snek-builtin.py $(SNEK_BUILTINS)
	python3 $^ -o $@

all: $(APP_ELF) $(APP_BIN) Makefile

clean:
	rm -rf $(BUILDDIR) $(OUTDIR)


$(APP_ELF): $(OBJECTS) $(SDK_DIR)/libsdk.a linker.ld
	$(LD) -T linker.ld -Wl,-Map $@.map -o $@ $(LD_FLAGS) $(OBJECTS) -lsdk

$(APP_BIN): $(APP_ELF)
	$(OBJCOPY) --output-target=binary --set-section-flags .bss=alloc,load,contents,data $< $@

# We're not actually building sdk.o, just telling the user they need to do it
# themselves. Just using the target to trigger an error when the file is
# required but does not exist.
$(SDK_DIR)/libsdk.a:
	@echo "ERROR: You need to build the SDK before using it. Run make in the SDK directory, and check the README.md in the SDK directory for more information" 1>&2 && exit 1


$(BUILDDIR)/%.o: %.S
	mkdir -p $(dir $@)
	$(AS) -c $< -o $@ $(AS_FLAGS)

$(BUILDDIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) -c $< -o $@ $(CC_FLAGS)

	

# Break the build if global constructors are present:
# Read the sections from the object file (with readelf -S) and look for any
# called .ctors - if they exist, give the user an error message, delete the
# object file (so that on subsequent runs of make the build will still fail)
# and exit with an error code to halt the build.
$(BUILDDIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) -c $< -o $@ $(CXX_FLAGS)
	@$(READELF) $@ -S | grep ".ctors" > /dev/null && echo "ERROR: Global constructors aren't supported." && rm $@ && exit 1 || exit 0

.PHONY: bin hhk all clean