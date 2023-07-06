#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: a pointer to the hash table
 *
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ind;
	hash_node_t *curr, *tmp;

	if (ht == NULL)
		return;

	for (ind = 0; ind < ht->size; ind++)
	{
		curr = ht->array[ind];
		while (curr)
		{
			tmp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = tmp;

		}
	}

	free(ht->array);
	free(ht);
}
