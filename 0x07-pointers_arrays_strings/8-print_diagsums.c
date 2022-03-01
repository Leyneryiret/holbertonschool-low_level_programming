#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 *diagonals of a square matrix of integers
 *@a: it is an array type integer
 *@size: array size
 *Return: never
 */

void print_diagsums(int *a, int size)
{
int i = 0, tl = 0, tr = 0;
int s = size * size;

while (i < s)
{
tl += a[i];
i += size + 1;
}
i = size - 1;
while (i < s - 1)
{
tr += a[i];
i += size - 1;
}
printf("%d, %d\n", tl, tr);
}
