#include "lists.h"
/**
 * add_dnodeint - add new node to the list
 * @head: head of the list
 * @n: valor of nodo
 * Return: nodo
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new = NULL;

  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
    return (NULL);

  new->n = n;
  new->prev = NULL;
  new->next = NULL;

  if (*head != NULL)
    {
      new->next = *head;
      (*head)->prev = new;
    }
  *head = new;
  return (new);  
}
