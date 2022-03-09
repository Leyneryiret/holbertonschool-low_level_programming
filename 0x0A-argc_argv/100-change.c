#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number
 *of coins to make change for an amount of money.
 * @argc: arguement
 * @argv: array of pointers to arguement strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
int a, sum;

if (argc != 2)
{
printf("Error\n");
return (1);
}
sum = 0;
a = atoi(argv[1]);
if (a > 25)
{
while (a >= 25)
a = a - 25, sum++;
}
if (a > 10 && a < 25)
{
while (a >= 10)
a = a - 10, sum++;
}
if (a > 5 && a < 10)
{
while (a >= 5)
a = a - 5, sum++;
}
if (a > 2 && a < 5)
{
while (a >= 2)
a = a - 2, sum++;
}
if (a == 1 || a == 2 || a == 5 || a == 10 || a == 25)
{
sum++;
}
printf("%d\n", sum);
return (sum);
}
