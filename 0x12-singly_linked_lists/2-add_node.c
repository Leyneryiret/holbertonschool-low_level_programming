#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
int lon, i;
char *copy;
list_t *new;

if (str == NULL || head == NULL)
return (NULL);
for (lon = 0; str[lon] != '\0'; lon++)
;
copy = malloc((lon + 1) * sizeof(char));
if (copy == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
copy[i] = str[i];
}
new = malloc(sizeof(list_t));
if (copy == NULL)
{
free(copy);
return (NULL);
}
new->str = copy;
new->len = lon;
new->next = *head;
*head = new;
return (new);
}
