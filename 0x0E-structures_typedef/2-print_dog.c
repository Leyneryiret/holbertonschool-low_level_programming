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
printf("name: (nil)\n");
printf("name: %s\n", (*d).name);

if (!(*d).age)
printf("age: (nil)\n");
printf("age: % 1f\n", (*d).age);

if (((*d).owner) == NULL)
printf("owner: (nil)\n");
printf("owner: %s\n", (*d).owner);
}
}
