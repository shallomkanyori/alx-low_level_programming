#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the pointer to the head node
 *
 * Return: the number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	int res = 0;

	while (h != NULL)
	{
		res++;
		h = h->next;
	}

	return (res);
}
