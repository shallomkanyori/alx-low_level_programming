#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: a pointer to the hash table
 * @key: the key of the new element
 * @value: the value of the new element
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *curr;
	char *new_value;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* If key already exists, update value. */
	curr = ht->array[index];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			new_value = realloc(curr->value, sizeof(char) * (strlen(value) + 1));
			if (new_value == NULL)
				return (0);
			strcpy(new_value, value);
			curr->value = new_value;
			return (1);
		}

		curr = curr->next;
	}

	return (add_node(ht, key, value, index));
}

/**
 * add_node - adds a node to the beginning of a hash table's linked list
 * @ht: a pointer to the hash table
 * @key: the key of the new element
 * @value: the value of the new element
 * @index: the index to add the new node
 *
 * Return: 1 on success, 0 on failure.
 */
int add_node(hash_table_t *ht, const char *key, const char *value,
		unsigned long int index)
{
	hash_node_t *curr = ht->array[index];
	hash_node_t *new = calloc(1, sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new);
		return (0);
	}

	curr = ht->array[index];
	new->next = curr;
	ht->array[index] = new;

	return (1);
}
