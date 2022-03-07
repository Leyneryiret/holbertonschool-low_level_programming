#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @l: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char l)
{
char *cr;
unsigned int i;

if (size == 0)
return (NULL);

cr = malloc(sizeof(l) * size);

if (cr == NULL)
return (NULL);

for (i = 0; i < size; i++)
cr[i] = l;

return (cr);
}
