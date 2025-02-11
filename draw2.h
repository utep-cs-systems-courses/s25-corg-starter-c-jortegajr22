#ifndef DRAW_INCLUDED
#define DRAW_INCLUDED

void print_triangle(int startCol, int size);
void print_square(int startCol, int size);
void print_char_8x12(char c);
void print_arrow_5x7(int length, int width);

extern const unsigned char font_8x12[][12];

#endif
