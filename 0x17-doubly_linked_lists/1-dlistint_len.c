#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked
 * @h: the head of list
 * Return:  the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *aux = NULL;

	aux = h;
	while (aux != NULL)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}
