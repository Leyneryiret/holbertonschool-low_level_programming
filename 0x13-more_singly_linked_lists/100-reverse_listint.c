#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the start of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *change, *forward;

if (head == NULL || *head == NULL)
return (NULL);

change = *head;
forward = change->next;
change->next = NULL;

while (forward != NULL)
{
*head = change;
change = forward;
forward = change->next;
change->next = *head;
}

*head = change;

return (*head);
}
