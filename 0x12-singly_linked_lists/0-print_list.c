#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}

		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (num_nodes);
}
