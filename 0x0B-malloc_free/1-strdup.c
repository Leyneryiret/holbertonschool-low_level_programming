#include "main.h"
#include <stdlib.h>
/**
 * _strdup -
 *
 *
 */
char *_strdup(char *str)
{
char *dupli;
unsigned int i, j;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
 dupli = (char *)malloc(sizeof(char) * (i + 1));
if (dupli == NULL)
return (NULL);

for (j = 0; j <= i; j++)
dupli[j] = str[j];

return(dupli);
}
