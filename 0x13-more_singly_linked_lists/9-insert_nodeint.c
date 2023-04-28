#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to the pointer to the head node
 * @idx: the index where the new node should be added
 * @n: the integer data of the new node
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr;
	listint_t *res;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	curr = *head;
	res = malloc(sizeof(listint_t));

	if (res == NULL)
		return (NULL);

	res->n = n;

	if (idx == 0)
	{
		res->next = curr;
		*head = res;
		return (res);
	}

	while (curr != NULL)
	{
		if (i == (idx - 1))
		{
			res->next = curr->next;
			curr->next = res;
			return (res);
		}

		curr = curr->next;
		i++;
	}

	return (NULL);
}
