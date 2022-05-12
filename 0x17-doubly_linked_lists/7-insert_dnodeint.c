#include "lists.h"
/**
 * insert_dnodeint_at_index - add node in index
 * @h: head of the list
 * @n: value to add
 * @idx: number of list to return
 * Return: nodo of the index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *aux = *h;
	unsigned int copy = idx, cont = 0;

	if (*h == NULL)
		return (NULL);
	if (idx == 0)
	{
		aux = add_dnodeint(h, n);
		return (aux);
	}

	if (idx > 0)
	{
		while (aux->next != NULL)
		{
			if (idx == 1)
			{
				new = malloc(sizeof(dlistint_t));
				if (new == NULL)
					return (NULL);
				new->n = n;
				new->prev = aux;
				new->next = aux->next;
				aux->next->prev = new;
				aux->next = new;
				return (new);
			}
			aux = aux->next;
			idx--;
			cont++;
		}
		cont++;
		if (copy == cont)
		{
			aux = add_dnodeint_end(h, n);
			return (aux);
		}
	}
free(new);
return (NULL);
}
