#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings
* @s1: is the array to concatenate
* @s2: it is the other array to concatenate
* @n: variable type integer
* Return: (conca)
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *conca;
unsigned int i = 0, j = 0, tamano, k, l;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
i++;

while (s2[j] != '\0')
j++;

if (n > j)
n = j;

tamano = i + n;
conca = malloc(tamano + 1);
if (conca == NULL)
return (NULL);

for (k = 0; k < i; k++)
conca[k] = s1[k];

for (l = 0; l < n; l++, k++)
conca[k] = s2[l];

conca[k] = '\0';
return (conca);
}
