#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: variable a las functiones
 * @f: function pointer
 * Return: never
 */

void print_name(char *name, void (*f)(char *))
{
if (f && name)
f(name);
}
