#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
int cents, sum;

if (argc != 2)
{
printf("Error\n");
return (1);
}
sum = 0;
cents = atoi(argv[1]);
if (cents > 25)
{
while (cents >= 25)
cents -= 25, sum++;
}
if (cents > 10 && cents < 25)
{
while (cents >= 10)
cents -= 10, sum++;
}
if (cents > 5 && cents < 10)
{
while (cents >= 5)
cents -= 5, sum++;
}
if (cents > 2 && cents < 5)
{
while (cents >= 2)
cents -= 2, sum++;
}
if (cents == 1 || cents == 2 || cents == 5 || cents == 10 || cents == 25)
{
sum++;
}
printf("%d\n", sum);
return (sum);
}
