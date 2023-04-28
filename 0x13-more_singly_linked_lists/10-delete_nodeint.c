#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at the given index of a
 * listint_t linked list
 * @head: the pointer to the pointer to the head node
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr;
	listint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		if (curr == NULL)
			return (-1);

		*head = curr->next;
		free(curr);
		return (1);
	}

	while (curr != NULL)
	{
		if (i == (index - 1))
		{
			if (curr->next == NULL)
				return (-1);

			tmp = curr->next;
			curr->next = tmp->next;
			free(tmp);
			return (1);
		}

		curr = curr->next;
		i++;
	}

	return (-1);
}
