#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ret;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ret = malloc(nmemb * size);

if (ret == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
ret[i] = 0;

return (ret);
}
