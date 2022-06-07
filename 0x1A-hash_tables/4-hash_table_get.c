#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: Hash table to look into
 * @key: Key looking for
 * Return: Value associated to key, or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *actual_node;

	if (!ht && !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	actual_node = ht->array[index];

	while (actual_node)
	{
	  if (strcmp(actual_node->key, key) == 0)
			return (actual_node->value);

		actual_node = actual_node->next;
	}

	return (NULL);
}
