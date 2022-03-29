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

if (h->str == NULL)
{
printf("[0] (nil)\n");
h = h->next;
i++;
}
for (; h; i++)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (i);
}
