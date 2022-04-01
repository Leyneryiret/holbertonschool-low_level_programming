#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a  linked list
 * @head: pointer to head of list
 * @index: the posicion to return
 * Return: the nodo to return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

if (head == NULL)
return (NULL);
else
{
for (i = 0; i < index; i++)
head = head->next;
}
return (head);
}
