#include <stdio.h>
#include "draw2.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}
// Prints an arrow of 5x7 dimensions
 void print_arrow_5x7(int length, int width)
 {
    for (int row = 0; row < length/2; row++){
      for (int col = 0; col < width; col++){
	putchar( (col == width/2) ? '*' : ' ');
      }
      putchar('\n');
    }
    int count = 0;
    for (int row = 0; row < length/2; row++){
      int sub = width - count;
      for (int col = 0; col < width; col++){
	if (count < (width/2)+1){
          if (col == count || col == (width-1)-count || col == width/2)
    	    putchar( '*');
          else putchar(' ');
	  }
      }
      putchar('\n');
      count++;
    }
 }
