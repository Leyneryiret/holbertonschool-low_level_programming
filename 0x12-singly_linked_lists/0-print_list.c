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

for (; h; i++)
{
if (h->str)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
}
return (i);
}
