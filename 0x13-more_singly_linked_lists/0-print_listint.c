#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the pointer to the head node
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;

		printf("%d\n", h->n);
		h = h->next;
	}

	return (num_nodes);
}
