#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the first node in the list
 * @index: the index of the node to get
 *
 * Return: the address of the node at index or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	while (curr)
	{
		if (i == index)
			return (curr);

		curr = curr->next;
		i++;
	}

	return (NULL);
}
