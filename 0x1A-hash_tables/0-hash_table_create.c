#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the new hash table or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *res;

	res = malloc(sizeof(hash_table_t));
	if (res == NULL)
		return (NULL);

	res->size = size;
	res->array = NULL;

	res->array = calloc(size, sizeof(hash_node_t *));
	if (res->array == NULL)
	{
		free(res);
		return (NULL);
	}

	return (res);
}
