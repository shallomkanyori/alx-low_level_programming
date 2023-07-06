#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key from the hash
 * table
 * @ht: a pointer to the hash table
 * @key: the key whose value to retrieve
 *
 * Return: the value associated with the key or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *curr;

	if (ht == NULL || key == NULL)
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[ind];

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);

		curr = curr->next;
	}

	return (NULL);
}
