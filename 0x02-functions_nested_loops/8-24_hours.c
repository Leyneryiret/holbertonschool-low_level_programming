#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
int td, h, m, s;

for (td = 48; td <= 50; td++)
{
for (h = 48; h <= 57; h++)
{
for (m = 48; m <= 53; m++)
{
for (s = 48; s <= 57; s++)
{
if (td >= 50 && h >= 52)
break;
_putchar(td);
_putchar(h);
_putchar(58);
_putchar(m);
_putchar(s);
_putchar('\n');
}
}
}
}
}
