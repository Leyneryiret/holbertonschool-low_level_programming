#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: is type integer
 * @b: is type integer
 *return: no return
 */
void swap_int(int *a, int *b)
{
int a1, b1;

a1 = *a;
b1 = *b;

*a = b1;
*b = a1;
}
