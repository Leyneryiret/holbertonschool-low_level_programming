#include "lists.h"

/**
 * add_nodeint - add new nodes to the list
 * @head: current place in the list
 * @n: interger add to the head
 * Return: pointer to current position in list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

if (!head)
return (NULL);

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;
*head = new;
return (new);
}
