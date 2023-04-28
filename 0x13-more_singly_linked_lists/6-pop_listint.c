#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the pointer to the pointer to the head node
 *
 * Return: the head node's data or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *h = *head;
	listint_t *tmp;
	int res = 0;

	if (h != NULL)
	{
		tmp = h;
		h = h->next;

		res = tmp->n;
		free(tmp);

		*head = h;
	}

	return (res);
}
