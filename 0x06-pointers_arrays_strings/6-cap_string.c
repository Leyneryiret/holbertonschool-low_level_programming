#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @a: is a array tipe char.
 * Return: the poin to a
 */

char *cap_string(char *a)
{
int s[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
int i = 0, j = 0;

if (a[i] >= 97 && a[i] <= 122)
a[i] = a[i] - 32;
i++;
while (a[i] != '\0')
{
for (j = 0; j <= 12; j++)
{
if (a[i] == s[j])
{
if (a[i + 1] >= 97 && a[i + 1] <= 122)
  a[i + 1] = a[i + 1] - 32;
break;

}
}
i++;
}
return (a);
}
