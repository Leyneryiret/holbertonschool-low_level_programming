#include "3-calc.h"

/**
 * op_add - adds two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */

int op_add(int a, int b)
{
int c = 0;

if (a && b)
c = a + b;
return (c);
}

/**
 * op_sub - subctracts two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: (c)
 */

int op_sub(int a, int b)
{
int c = 0;

if (a && b)
c = a - b;
return (c);
}

/**
 * op_mul - multiplies two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */

int op_mul(int a, int b)
{
int c = 0;

if (a && b)
c = a * b;
return (c);
}

/**
 * op_div - divides two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: (c)
 */

int op_div(int a, int b)
{
int c = 0;

if (b == 0)
{
printf("Error\n");
exit(100);
}
else
c = a / b;

return (c);
}

/**
 * op_mod - calculates the module of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: (c)
 */

int op_mod(int a, int b)
{
int c = 0;

if (b == 0)
{
printf("Error\n");
exit(100);
}
else
c = a % b;

return (c);
}
