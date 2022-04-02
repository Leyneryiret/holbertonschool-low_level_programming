#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a  linked list
 * @head: pointer to head of list
 * @index: the posicion to return
 * Return: the nodo to return
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  listint_t *new = NULL, *otro = NULL, *ret = NULL;
  unsigned int i = 0;

  new = malloc(sizeof(listint_t));
  if (new == NULL)
    return (NULL);

  new->n = n;
  new->next = NULL;

  otro = *head;
  
  for (i = 0; i < idx; i++)
    {
	otro = otro->next;
    }
  otro->next = new;
  otro = ret;
  return (*head);
}
