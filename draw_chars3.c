#include "draw2.h"		
#include "stdio.h"		

void print_char_8x12(char c)
{
   c -= 0x20;  
  
   for (char row = 0; row < 12; row++) {   // Loop rows
    for (char col = 0; col < 8; col++) { // Loop col
      unsigned short rowBits = font_8x12[c][row];  // Get binary pattern for row
      unsigned short colMask = 1 << (7-col);  // Shift bit mask
      putchar((rowBits & colMask) ? '*' : ' ');  
    }
    putchar('\n');  
     }
}
