#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the pointer to the head node
 * @index: the index at which to get the node
 *
 * Return: the node at index if it exits, otherwise NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h = head;
	unsigned int i = 0;

	while (h != NULL)
	{
		if (i == index)
			return (h);

		h = h->next;
		i++;
	}

	return (NULL);
}
