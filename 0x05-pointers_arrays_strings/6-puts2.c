#include "main.h"

/**
 * puts2 - a function that prints every other character
 * @str: is type char
 * return: never
 */

void puts2(char *str)
{
int count = 0;

while (str[count] != '\0')
{
if (count % 2 == 0)
_putchar(str[count]);
count++;
}
_putchar('\n');
}
