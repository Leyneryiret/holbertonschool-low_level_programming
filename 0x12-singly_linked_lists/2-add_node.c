#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *_longitud - calculo de longitut
 *@str: es un string
 *Return: (lon)
 */
int _longitud(const char *str)
{
int lon = 0;

for (; str[lon] != '\0'; lon++)
;
return (lon);
}


/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

if (str == NULL || head == NULL)
return (NULL);

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = _longitud(str);
new->next = *head;
*head = new;
return (new);
}
