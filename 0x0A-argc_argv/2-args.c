#include <stdio.h>
/**
 * main -  writes its name
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc ; ++i)
printf("%s\n", argv[i]);
return (0);
}

