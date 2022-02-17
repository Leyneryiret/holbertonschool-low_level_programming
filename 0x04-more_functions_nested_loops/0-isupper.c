#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: variable type int
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */

int _isupper(int c)
{

if (c >= 'a' && c <= 'z')
{
return (0);
}
else
{
return (1);
}
}
