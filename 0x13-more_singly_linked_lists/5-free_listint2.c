#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: the beginning of the list
 */
void free_listint2(listint_t **head);
{
if (head == NULL)
return;
free_listint(head->next);
free(head);
}
