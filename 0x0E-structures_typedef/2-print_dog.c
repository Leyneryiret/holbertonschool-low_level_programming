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
printf("Name: (nil)\n");
printf("Name: %s\n", (*d).name);

if (!(*d).age)
printf("Age: (nil)\n");
printf("Age: % 1f\n", (*d).age);

if (((*d).owner) == NULL)
printf("Owner: (nil)\n");
printf("Owner: %s\n", (*d).owner);
}
}
