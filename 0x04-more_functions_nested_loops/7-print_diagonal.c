#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: Is variale type int
 */

void print_diagonal(int n)
{
  int e;
  int c;

  if (n <=0)
    _putchar('\n');
 
for (c = 0; c < n; c++)
  {
    for (e = 0; e <= c; e++)
      {
	if(e == c)
	  {
        _putchar(92);
	_putchar('\n');
          }
    else
      _putchar(32);
      }
  }
}
