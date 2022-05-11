#include "lists.h"
/**
* print_dlistint - print the values of a list
* @h: head of the list
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *aux = NULL;

	aux = h;
	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		i++;
		aux = aux->next;
	}
	return (i);
}
