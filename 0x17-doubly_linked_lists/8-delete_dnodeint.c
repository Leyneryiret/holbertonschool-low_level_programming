#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: head of the lists
 * @index: index to delet
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *ant = NULL, *sig = NULL, *ant_ulti = NULL;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = aux->next;
		if (aux->next != NULL)
			aux->next->prev = NULL;
		return (1);
	}
	while (aux->next)
	{
		if (index == 0)
		{
			ant = aux->prev;
			aux->prev = NULL;
			sig = aux->next;
			aux->next = NULL;
			ant->next = sig;
			sig->prev = ant;

			return (1);
		}
		aux = aux->next;
		index--;
	}
	if (index == 0)
	{
		ant_ulti = aux->prev;
		aux->prev = NULL;
		aux->next = NULL;
		ant_ulti->next = NULL;
		return (1);
	}
	return (-1);
}
