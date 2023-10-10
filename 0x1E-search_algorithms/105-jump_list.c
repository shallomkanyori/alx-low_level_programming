#include "search_algos.h"
#include <math.h>

/**
 * jump_list_ls - performs the linear search in Jump searching a linked list.
 * @a: a pointer to the start node
 * @b: a pointer to the end node
 * @value: the value to search for
 *
 * Return: a pointer to the first node where @value is located. If value is not
 * present or if list is NULL, returns NULL.
 */
listint_t *jump_list_ls(listint_t *a, listint_t *b, int value)
{
	if (!a || !b)
		return (NULL);

	printf("Value found between indexes [%ld] and [%ld]\n",
			a->index, b->index);

	while (a)
	{
		printf("Value checked at index [%ld] = [%d]\n", a->index, a->n);

		if (a->n == value)
			return (a);

		if (a == b)
			return (NULL);

		a = a->next;
	}

	return (NULL);
}

/**
 * jump_list - searches for a value in a linked list using Jump search
 * @list: a pointer to the head of the list
 * @size: the number of elements in the list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where @value is located. If value is not
 * present or if list is NULL, returns NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *a = NULL, *b = NULL;
	size_t step, b_ind;

	if (!list)
		return (NULL);

	step = (size_t)sqrt(size);
	a = list;
	b = list;

	while (b && b->index < step)
		b = b->next;

	b_ind = 2;
	while (b)
	{
		printf("Value checked at index [%ld] = [%d]\n", b->index, b->n);

		if (b->n < value)
		{
			a = b;
			while (b && b->index < (b_ind * step))
				b = b->next;

			b_ind++;
		}
		else
			break;
	}

	if (!b)
	{
		b = a;
		while (b->next)
			b = b->next;

		printf("Value checked at index [%ld] = [%d]\n", b->index, b->n);
	}

	return (jump_list_ls(a, b, value));
}
