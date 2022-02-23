
#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: is type car
 *return: never
 */

void puts_half(char *str)
{
int i = 0, ultimo;

while (str[i] != '\0')
{
i++;
}

if (i % 2 == 1)
ultimo = i / 2;
else
ultimo = (i - 1) / 2;

for (ultimo++; ultimo < i; ultimo++)
_putchar(str[ultimo]);
_putchar('\n');
}
