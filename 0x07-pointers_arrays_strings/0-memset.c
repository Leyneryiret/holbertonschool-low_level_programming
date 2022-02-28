#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: is a array type char
 * @b: is a variable type char
 * @n: is a variable type integer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
