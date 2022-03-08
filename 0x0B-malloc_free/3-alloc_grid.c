#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of the array.
* @height: height of the array.
* Return: pointer of an array of integers
*/

int **alloc_grid(int width, int height)
{
int **newarra;
int i, j;

if (width < 1 || height < 1)
return (NULL);

newarra = malloc(height * sizeof(int *));
if (newarra == NULL)
{
free(newarra);
return (NULL);
}

for (i = 0; i < height; i++)
{
newarra[i] = malloc(width * sizeof(int));
if (newarra[i] == NULL)
{
for (i--; i >= 0; i--)
free(newarra[i]);
free(newarra);
return (NULL);
}
}

for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
newarra[i][j] = 0;

return (newarra);
}
}
