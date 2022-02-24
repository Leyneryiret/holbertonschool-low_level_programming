#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *@s1: is a tipe array.
 *@s2: is a tipe array.
 *Return: @r un tioe integer
 */

int _strcmp(char *s1, char *s2)
{
int r = 0;

r = *s1 - *s2;
return (r);
}
