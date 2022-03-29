#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
list_t const *h1;

h1 = h;
if (h1->str == NULL)
{
printf("[0] (nil)\n");
h1 = h1->next, i = i + 1;
}
for (i; h1; i++)
{
printf("[%d] %s\n", h1->len, h1->str);
h1 = h1->next;
}
return (i);
}
