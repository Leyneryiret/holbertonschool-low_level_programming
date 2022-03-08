#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: is the array to concatenate
 * @s2: it is the other array to concatenate
 * Return: (res)
 */

char *str_concat(char *s1, char *s2)
{
char *res;
unsigned int i, j, k, l;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

res = malloc(sizeof(char) * (i + j + 1));

if (res == NULL)
return (NULL);

for (k = 0; k < i; k++)
res[k] = s1[k];

for (l = 0; l <= j; l++, k++)
res[k] = s2[l];

return (res);
}
