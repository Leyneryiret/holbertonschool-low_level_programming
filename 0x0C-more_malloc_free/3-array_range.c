#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - function that creates an array of integers.
 * @min: variable type interger
 * @max: variable type interger
 * Return: (guar)
 */

int *array_range(int min, int max)
{
int *guar;
int i;

if (min > max)
return (NULL);

guar = malloc(sizeof(*guar) * ((max - min) + 1));
if (guar == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
guar[i] = min;

return (guar);
}
