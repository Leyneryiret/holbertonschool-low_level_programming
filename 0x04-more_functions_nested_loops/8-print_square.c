#include "main.h"
/** print_square - prints a square
 *
 *size: Is the size of the square
 */

void print_square(int size)
{
  int alto;
int largo;
  
  if (size <= 0)
    _putchar('\n');
for (alto = 0; alto < size; alto++)
  {
    for (largo = 0; largo <= size; largo++)
      {
	if (largo == size)
	  _putchar('\n');
	else
	  _putchar(35);
      }
  }
}
