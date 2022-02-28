#include "main.h"

/**
 * _memcpy - function that copies memory area
 *@dest: is a array type char
 *@src: is a array type char
 *@n: is a variable type integer
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
