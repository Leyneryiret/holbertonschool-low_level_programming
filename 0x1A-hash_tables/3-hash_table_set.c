#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: hash table to add.
 * @key: key to add.
 * @value: value associated to the key.
 * Return: 1 if success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *nodo_to_add = NULL, *aux = NULL;

	if (!ht || !key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	nodo_to_add = ht->array[index];

	while (nodo_to_add)
	{
		if (strcmp(key, nodo_to_add->key) == 0)
		{
			free(nodo_to_add->value);
			nodo_to_add->value = strdup(value);
			return (1);
		}
		nodo_to_add = nodo_to_add->next;
	}

	aux = malloc(sizeof(hash_node_t));
	if (!aux)
		return (0);

	aux->key = strdup(key);
	aux->value = strdup(value);

	aux->next = ht->array[index];

	ht->array[index] = aux;

	return (1);
}
