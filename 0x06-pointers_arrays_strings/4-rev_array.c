#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: is a array tipe char.
 * @n: is tipe integer.
 * Return: never.
 */

void reverse_array(int *a, int n)
{
int i = 0, s = 0, g = 0;

while (i < n)
{
s = n - i - 1;
g = a[s];
a[s] = a[i];
a[i] = g;
i++;
if (s <= i)
break;
}
}
