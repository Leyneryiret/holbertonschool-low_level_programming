#include <stdio.h>

/**
* main - Print the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char na;

for (na = '0'; na <= '9'; na++)
putchar(na);

for (na = 'a'; na <= 'f'; na++)
putchar(na);

putchar('\n');

return (0);
}
