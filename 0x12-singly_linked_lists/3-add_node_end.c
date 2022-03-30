#include "lists.h"
/**
 * _longitud - gets length of the string
 * @str: string
 * Return: length of the string
 */
int _longitud(const char *str)
{
int i;

for (i = 0; str[i]; i++)
;
return (i);
}

/**
 * add_node_end - add new nodes to the end of the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *current;

if (str == NULL)
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
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new;
return (*head);
}
