#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: number of list to return
 * Return: nodo of the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index >= 0 && head != NULL)
	{
		while (head->next != NULL)
		{
			if (index == 0)
				return (head);
			head = head->next;
			index--;
		}
	}
	return (NULL);
}
