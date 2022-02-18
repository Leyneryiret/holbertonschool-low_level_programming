#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,
 *
 * @void: no argument
 * Return: 0 Success
 */
int main(void)
{
int n;

for (n = 1; n < 101; n++)
{

if (n % 15 == 0)
printf("FizzBuzz ");

else if (n % 3 == 0)
printf("Fizz ");

else if (n % 5 == 0)
printf("Buzz ");

else
printf("%d ", n);

}
printf("\n");
return (0);
}
