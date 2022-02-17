#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the termina
 * @n: Is variale type int
 */

void print_diagonal(int n)
{
int e;
char c;

if (n <= 0)
_putchar('\n');

for (c = 0; c < n; c++)
{
for (e = 0; e <= c; e++)
{
if (e == c)
{
_putchar(92);
_putchar('\n');
}
else
_putchar(32);
}
}
}
