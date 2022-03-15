#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog
 * Return: never
 */
void print_dog(struct dog *d)
{
if (d)
{
if (((*d).name) == NULL)
printf("nil\n");
printf("name: %s\n", (*d).name);

printf("age: % 1f\n", (*d).age);

if (((*d).owner) == NULL)
printf("nil\n");
printf("owner: %s\n", (*d).owner);
}
}
