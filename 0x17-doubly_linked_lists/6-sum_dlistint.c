#include "lists.h"
/**
 * sum_dlistint -  sum of all the data (n) of a dlist
 * @head: head of the list
 * Return: the sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int suma = 0;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			suma = suma + head->n;
			head = head->next;
		}
		suma = suma + head->n;
		return (suma);
	}
	return (0);
}
