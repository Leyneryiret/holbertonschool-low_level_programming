#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: is a array type char
 * Return: the poin en s
 */

char *leet(char *s)
{
  int lm[] = {97, 101, 111, 116, 108};
  int l[] = {65, 69, 79, 84, 76};
  int rem[] = {52, 51, 48, 55, 49};
  int i = 0, j;

  while (s[i] != '\0')
    {
      for (j = 0; j < 5; j++)
	{
	  if (s[i] == lm[j] || s[i] == l[j])
	    {
	      s[i] = rem[j];
	      break;
	    }
	}
      i++;
    }
  return (s);
}
