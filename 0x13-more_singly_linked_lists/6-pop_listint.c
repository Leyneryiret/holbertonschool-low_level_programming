#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: double pointer to head of list
 * Return: deleted node data
 */
int pop_listint(listint_t **head)
{
int new_n = 0;
listint_t *new_head = NULL, *delet = NULL;

if (head == NULL)
return (0);

if (*head)
{
new_head = delet = *head;
new_n = new_head->n;

new_head = delet->next;
free(delet);
*head = new_head;
}
else
{
new_n = 0;
}
return (new_n);
}
