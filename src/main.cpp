
char end = 0;

#include <appdef.hpp>
#include <sdk/calc/calc.hpp>
#include <sdk/os/debug.hpp>
#include <sdk/os/file.hpp>
#include <sdk/os/lcd.hpp>

#include <stdlib.h>
#include <string.h>

extern "C" {
#include "pvm/snek.h"
}

/*
 * Fill this section in with some information about your app.
 * All fields are optional - so if you don't need one, take it out.
 */
APP_NAME("Snek")
APP_DESCRIPTION("A small Python-compatible interpreter")
APP_AUTHOR("PC")
APP_VERSION("1.0.0")

extern "C"

    uint8_t *snek_cp_input = nullptr;

namespace std {
[[noreturn]] void __throw_domain_error(const char *) {
  // Handle error, e.g., abort
  Debug_Printf(0, 0, false, 0, "Domain Error");
}
} // namespace std

void main() {
  calcInit(); // backup screen and init some variables

  // Example for fillScreen(color);
  fillScreen(color(0, 64, 0));
  fillScreen(color(0, 64, 0));

  // use this command to actually update the screen
  LCD_Refresh();

  fillScreen(color(0, 0, 0));
  Debug_Printf(0, 0, false, 0, "Loading Py Class");
  LCD_Refresh();

  // Load class

  char filename[] = "\\fls0\\py\\hello.py";

  int32_t class_file = File_Open(filename, FILE_OPEN_READ);

  if (class_file < 0) {
    Debug_Printf(0, 1, true, 0, "Can't load %s", filename);
  } else {

    struct File_Stat class_file_stat;

    File_Fstat(class_file, &class_file_stat);

    // dynamically allocate space for bc (bytecode) class in heap
    snek_cp_input = (uint8_t *)malloc(class_file_stat.fileSize);

    if (!snek_cp_input) {
      Debug_Printf(0, 1, true, 0, "Class stat is null ?");
    } else {
      int32_t bytes_read =
          File_Read(class_file, snek_cp_input, class_file_stat.fileSize);

      if (bytes_read < 0) {
        Debug_Printf(0, 1, true, 0, "Empty file : %d", bytes_read);
      } else {
        Debug_Printf(0, 1, false, 0, "Read %d bytes of class - OK", bytes_read);
        // TODO: exec here

        snek_init();
        // bc
        bool ret = snek_parse() == snek_parse_success;
        Debug_Printf(0, 2, false, 0, "Returned %d - OK", ret);
        fprintf(stderr, "RETURN");
      }
    }

    File_Close(class_file);
  }

  LCD_Refresh();

  // Example for getKey
  while (true) {
    uint32_t key1, key2;  // First create variables
    getKey(&key1, &key2); // then read the keys
    if (testKey(
            key1, key2,
            KEY_CLEAR)) { // Use testKey() to test if a specific key is pressed
      break;
    }
  }

  calcEnd(); // restore screen and do stuff
}