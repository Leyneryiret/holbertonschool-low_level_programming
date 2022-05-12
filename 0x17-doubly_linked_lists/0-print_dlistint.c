#include "lists.h"
/**
* print_dlistint - print the values of a list
* @h: head of the list
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;

if (h == NULL)
return (i);

while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
