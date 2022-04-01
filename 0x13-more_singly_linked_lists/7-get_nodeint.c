#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: double pointer to head of list
 */
 listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  int i = 0;
  unsigned int new_ret = 0;
  listint_t *new_head = NULL;

  if (head == NULL || *head == NULL)
    return NULL;

  for (i = 0; index, i++)
    head = head->next;

  new_ret = head->n;
  return (new_ret);
}
