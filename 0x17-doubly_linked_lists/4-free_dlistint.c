#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the first node in the list
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;

	while (curr)
	{
		curr = curr->next;
		free(head);
		head = curr;
	}
}
