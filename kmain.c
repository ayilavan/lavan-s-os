#include "drivers/frame_buffer.h"
#include "drivers/serial_port.h"

/* The C function */
int sum_of_three(int arg1, int arg2, int arg3)
{
char text[] = "wel come";

fb_write(text, 19);
serial_write(0x3F8, text, 19);

return arg1 + arg2 + arg3;
}
