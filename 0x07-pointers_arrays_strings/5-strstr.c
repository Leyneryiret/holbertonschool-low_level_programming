#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: is a array type char
 * @needle: is a array type char
 * Return: (s + 1) or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j;

while (haystack[i] != '\0')
{
j = 0;
while (needle[j] != '\0')
{
if (haystack[i] == needle[j])
{
break;
}
j++;
}
if (haystack[i] == needle[j])
{
return (haystack + i);
break;
}
i++;
}
return ('\0');
}
