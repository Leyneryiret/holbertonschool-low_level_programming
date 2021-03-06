#include "variadic_functions.h"

/**
 * print_strings - function that prints strings.
 * @separator: the string to be printed between strings
 * @n: is the number of parameters
 * Return: never
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ca;
unsigned int i;
char *pala;

va_start(ca, n);

for (i = 0; i < n; i++)
{
pala = va_arg(ca, char *);

if (pala)
printf("%s", pala);
else
printf("(nil)");

if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ca);
}
