#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: the list_t list
 *
 * Return: the number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t res = 0;

	while (h != NULL)
	{
		res++;
		h = h->next;
	}

	return (res);
}
