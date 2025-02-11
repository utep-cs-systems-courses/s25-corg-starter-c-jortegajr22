#include "draw2.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_11x16(char c)
{
   c -= 0x20;  // Adjust ASCII index
  
   for (char row = 0; row < 11; row++) {   // Loop through rows
    for (char col = 0; col < 16; col++) { // Loop through columns
      unsigned short rowBits = font_11x16[c][row];  // Get binary pattern for row
      unsigned short colMask = 1 << (15-col);  // Shift bit mask
      putchar((rowBits & colMask) ? '*' : ' ');  // Print '*' for 1, space for 0
    }
    putchar('\n');  // New line after each row
     }
  putchar('\n');  // Extra newline for spacing
}
