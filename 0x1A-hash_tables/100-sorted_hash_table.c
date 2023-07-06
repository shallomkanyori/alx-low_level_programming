#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the array
 *
 * Return: A pointer to the new table or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *res = calloc(1, sizeof(shash_table_t));

	if (res == NULL)
		return (NULL);

	res->size = size;
	res->array = calloc(size, sizeof(shash_node_t *));
	if (res->array == NULL)
	{
		free(res);
		return (NULL);
	}

	return (res);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: a pointer to the sorted hash table
 * @key: the key of the element to add
 * @value: the value of the element to add
 *
 * Return: 1 on success, 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	shash_node_t *curr;
	char *new_value = NULL;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);

	/* If key already exist, update value */
	curr = ht->array[ind];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			if (value != NULL && strcmp(curr->value, value) == 0)
			{
				new_value = curr->value;
			}
			else if (value != NULL)
			{
				new_value = realloc(curr->value, sizeof(char) * (strlen(value) + 1));
				if (new_value == NULL)
					return (0);
				strcpy(new_value, value);
			}

			curr->value = new_value;
			return (1);
		}

		curr = curr->next;
	}

	return (add_snode(ht, key, value, ind));
}

/**
 * add_snode - adds a new node to the beginning of a sorted hash table's
 * linked list
 * @ht: a pointer to the sorted hash table
 * @key: the key of the new element
 * @value: the value of the new element
 * @index: the index to add the new node
 *
 * Return: 1 on success, 0 on failure.
 */
int add_snode(shash_table_t *ht, const char *key, const char *value,
		unsigned long int index)
{
	shash_node_t *curr;
	shash_node_t *new = calloc(1, sizeof(shash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = value == NULL ? NULL : strdup(value);
	if (value != NULL && new->value == NULL)
	{
		free(new);
		return (0);
	}

	curr = ht->array[index];
	new->next = curr;
	ht->array[index] = new;

	add_snode_list(ht, new);

	return (1);
}

/**
 * add_snode_list - adds a newly added node to the sorted linked list of the
 * sorted hash table
 * @ht: a pointer to the sorted hash table
 * @new: a pointer to the newly added node
 *
 * Return: nothing.
 */
void add_snode_list(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *curr = ht->shead;
	shash_node_t *prev = NULL;

	if (curr == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		new->snext = NULL;
		new->sprev = NULL;
		return;
	}

	while (curr)
	{
		if (strcmp(new->key, curr->key) < 0)
			break;

		prev = curr;
		curr = curr->snext;
	}

	if (prev == NULL)
		ht->shead = new;
	else
		prev->snext = new;

	if (curr == NULL)
		ht->stail = new;
	else
		curr->sprev = new;

	new->sprev = prev;
	new->snext = curr;

}

/**
 * shash_table_get - retrieves a value associated with a key from a sorted
 * hash table
 * @ht: a pointer to the sorted hash table
 * @key: the key whose value to retrieve
 *
 * Return: the value associated with the key or NULL if the key couldn't be
 * found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ind;
	shash_node_t *curr;

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

/**
 * shash_table_print - prints the sorted hash table
 * @ht: a pointer to the sorted hash table
 *
 * Return: nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	curr = ht->shead;
	printf("{");
	while (curr)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		if (curr->snext != NULL)
			printf(", ");

		curr = curr->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints the sorted hash table in reverse
 * @ht: a pointer to the sorted hash table
 *
 * Return: nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr;

	if (ht == NULL)
		return;

	curr = ht->stail;
	printf("{");
	while (curr)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		if (curr->sprev != NULL)
			printf(", ");

		curr = curr->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: a pointer to the sorted hash table
 *
 * Return: nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int ind;
	shash_node_t *curr, *tmp;

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
