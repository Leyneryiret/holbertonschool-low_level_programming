#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the hash table.
 * Return: a pointer to the newly created hash table otherwhise returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	hash_node_t **nodos_table = NULL;

	new_hash_table = calloc(1, sizeof(*new_hash_table));
	if (!new_hash_table)
	        return (NULL);

	nodos_table =  calloc(size, sizeof(*nodos_table));
	if (!nodos_table)
	{
		free(new_hash_table);
		return (NULL);
	}

	new_hash_table->size = size;
	new_hash_table->array = nodos_table;
	return (new_hash_table);
}
