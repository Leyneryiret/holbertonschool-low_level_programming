#include "main.h"

/**
 *rev_string - function that reverses a string
 *@s: is type char
 *return: never
 */
void rev_string(char *s)
{
int rev1 = 0, rev = 0;
char stre;

while (s[rev1 + 1] != '\0')
{
rev1++;
}

while (rev <= rev1)
{
stre = s[rev];
s[rev] = s[rev1];
s[rev1] = stre;
rev++;
rev1--;
}
}
