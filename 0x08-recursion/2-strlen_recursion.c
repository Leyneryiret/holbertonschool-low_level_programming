#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: is a string to calculate
 * Return: the lengtg en type integer
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (_strlen_recursion(s + 1) + 1);
}
