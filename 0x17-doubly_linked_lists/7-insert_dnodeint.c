#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to the first node in the list
 * @idx: the index to insert the new node at
 * @n: the integer data of the new node
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	curr = *h;
	while (curr)
	{
		if (i == (idx - 1))
			break;

		curr = curr->next;
		i++;
	}

	if (curr == NULL)
		return (NULL);

	new->next = curr->next;
	new->prev = curr;
	curr->next = new;
	if (new->next)
		new->next->prev = new;

	return (new);
}
