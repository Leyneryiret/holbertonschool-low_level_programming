#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *@s1: is a tipe array.
 *@s2: is a tipe array.
 *Return: @r un tioe integer
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, r = 0;

while (r == 0)
{
if ((s1[i] == '\0') && (s2[i] == '\0'))
break;
r = s1[i] - s2[i];
i++;
}
return (r);
}
