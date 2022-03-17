#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @size: parameter of array
 * @action: function pointer
 * Return: never
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array && action)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
