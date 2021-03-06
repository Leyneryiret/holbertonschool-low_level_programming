#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: is the number of parameters.
 * Return: (s) is the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
va_list parametros;
int s = 0, valor = 0;
unsigned int i;

if (n == 0)
return (0);

va_start(parametros, n);
for (i = 0; i < n; i++)
{
valor = va_arg(parametros, int);
s += valor;
}
va_end(parametros);
return (s);
}
