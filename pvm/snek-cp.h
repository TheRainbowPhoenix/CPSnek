#ifndef _SNEK_CP_H_
#define _SNEK_CP_H_

#define INFINITY 0x7f800000
#define NAN 0x7fffffff

extern uint8_t *snek_cp_input;
extern int snek_cp_index;  // Global index counter

int snek_file_getc(uint8_t *input);

#define SNEK_GETC()	snek_file_getc(snek_cp_input)

#define SNEK_DEBUG	1

#endif /* _SNEK_CP_H_ */