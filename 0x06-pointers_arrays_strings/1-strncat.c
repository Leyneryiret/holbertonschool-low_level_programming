#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: an array of type char
 * @src: an array of type char
 * @n: is type integer
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
i++;

while (j < n)
{
dest[i] = src[j];
i++;
j++;
if (src[j] == '\0')
break;
}
return (dest);
}
