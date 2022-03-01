#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: is a array type char
 * @needle: is a array type char
 * Return: (s + 1) or NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *bhaystack;
char *pneedle;

while (*haystack != '\0')
{
bhaystack = haystack;
pneedle = needle;

while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
return (bhaystack);
haystack = bhaystack + 1;
}
return (0);
}
