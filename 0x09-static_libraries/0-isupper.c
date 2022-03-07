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

if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
