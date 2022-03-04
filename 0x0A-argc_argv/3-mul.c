#include <stdlib.h>
#include <stdio.h>

/**
* main -  multiplies two numbers
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: 0
**/
int main(int argc, char *argv[])
{
int a, b, resultado;

if (argc <= 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]), b = atoi(argv[2]);
resultado = a * b;
printf("%d\n", resultado);
return (0);
}
