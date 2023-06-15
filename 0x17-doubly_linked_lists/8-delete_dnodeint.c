#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to a pointer to the first node in the list
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	curr = *head;
	while (curr)
	{
		if (i == index)
			break;

		curr = curr->next;
		i++;
	}

	if (curr == NULL)
		return (-1);


	if (curr->prev)
		curr->prev->next = curr->next;
	else
		*head = curr->next;

	if (curr->next)
		curr->next->prev = curr->prev;

	free(curr);
	return (1);
}
