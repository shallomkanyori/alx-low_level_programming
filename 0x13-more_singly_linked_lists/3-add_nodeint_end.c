#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: the pointer to the pointer to the head node
 * @n: the integer data of the new node
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *res;
	listint_t *last;

	if (head == NULL)
		return (NULL);

	res = malloc(sizeof(listint_t));
	last = *head;
	if (res == NULL)
		return (NULL);

	res->n = n;
	res->next = NULL;

	if (*head == NULL)
	{
		*head = res;
		return (res);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = res;
	return (res);
}
