#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ind;
	hash_node_t *curr;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (ind = 0; ind < ht->size; ind++)
	{
		curr = ht->array[ind];
		if (curr != NULL)
		{
			if (!first)
				printf(", ");

			first = 0;
		}

		while (curr)
		{
			printf("'%s': '%s'", curr->key, curr->value);
			if (curr->next != NULL)
				printf(", ");

			curr = curr->next;
		}
	}

	printf("}\n");
}
