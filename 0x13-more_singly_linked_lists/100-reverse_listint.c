#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the pointer to the pointer to the head node
 *
 * Return: The pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *prev;

	if (head == NULL)
		return (NULL);

	curr = *head;
	prev = NULL;

	while (curr != NULL)
	{
		*head = curr->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}

	*head = prev;
	return (prev);
}
