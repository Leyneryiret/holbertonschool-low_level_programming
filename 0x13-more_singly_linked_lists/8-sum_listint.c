#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to head of list
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
int sum = 0;
  
if (!head || head->next == NULL)
return (0);
 
while (head->next != NULL)
{
sum  = sum + head->n;
head = head->next;
}
sum  = sum + head->n;
return (sum);
}
