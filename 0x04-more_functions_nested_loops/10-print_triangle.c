#include "main.h"

/**
 * print_triangle - function that prints a triangl
 *@size: is variale type int
 */

void print_triangle(int size)
{
int alto, ancho, n;

if (size <= 0)
_putchar('\n');

for (alto = 0; alto < size; alto++)
{
for (ancho = size - alto; ancho > 1; ancho--)
_putchar(32);

for (n = ancho + alto; n >= 1; n--)
_putchar(35);
_putchar('\n');
}
}

