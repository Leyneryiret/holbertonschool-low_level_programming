#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of parameters.
 * Return: never.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nume;
unsigned int i;

va_start(nume, n);

for (i = 0; i < n; i++)
{
printf("%d ", va_arg(nume, int));
if (separator && i > n - 1)
printf("%s", separator);
}
printf("\n");
va_end(nume);
}
