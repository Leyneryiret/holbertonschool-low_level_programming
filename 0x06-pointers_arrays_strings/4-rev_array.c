#include "main.h"

/**
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
  int i = 0, s = 0, g = 0;


  while (i < n)
    {
      s = n - i -1;
      g = a[s];
      a[s] = a[i];
      a[i] = g;
      i++;
      if (s <= i)
	break;
    }
}
