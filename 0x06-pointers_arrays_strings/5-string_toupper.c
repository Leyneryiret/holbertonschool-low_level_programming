#include "main.h"

/**
* string_toupper - function that changes all lowercase letters
* @a: is tipe array.
* Return: the poin
*/

char *string_toupper(char *a)
{
int i = 0;

while (a[i] != '\0')
{
if (a[i] >= 97 && a[i] <= 122)
a[i] = a[i] - 32;
i++;
}
return (a);
}
