#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the first node in the list
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t num_nodes = 0;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		num_nodes++;
	}

	return (num_nodes);
}
