#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlisint_t list
 * @h: pointer to the first node in the list
 *
 * Return: the number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t res = 0;

	while (curr)
	{
		res++;
		curr = curr->next;
	}

	return (res);
}
