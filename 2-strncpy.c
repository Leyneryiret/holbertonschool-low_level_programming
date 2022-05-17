#include "main.h"

/**
 * _strncpy - the number of elements to swap
 * @dest: is a array tipe char
 * @src: is a array tipe char
 * @n: is a tipe interger
 * Return: the poin dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
