#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: head of the lists
 * @index: index to delet
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *ant = NULL, *sig = NULL;
	unsigned int cont = 0;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = aux->next;
		if (aux->next != NULL)
			aux->next->prev = NULL;
		free(aux);
		return (1);
	}
	cont = 1;
	index = index + 1;
	while (aux)
	{
		if (index == cont)
		{
			if (aux->next != NULL)
			{

				ant = aux->prev;
				aux->prev = NULL;
				sig = aux->next;
				aux->next = NULL;
				ant->next = sig;
				sig->prev = ant;
				free(aux);
				return (1);
			}
			else
			{
				ant = aux->prev;
				aux->prev = NULL;
				ant->next = NULL;
				free(aux);
				return (1);
			}
		}
		aux = aux->next;
		cont++;
	}
	free(aux);
	return (-1);
}
