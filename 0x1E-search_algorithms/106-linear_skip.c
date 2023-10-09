#include "search_algos.h"

/**
 * linear_skip_ls - linear searches portion of skip list
 * @a: pointer to the first node to search
 * @b: pointer to the last node to search
 * @value: the value to search for
 *
 * Return: a pointer to the first node where @value is located. If value is not
 * present or if list is NULL, returns NULL.
 */

skiplist_t *linear_skip_ls(skiplist_t *a, skiplist_t *b, int value)
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

		if  (a == b)
			return (NULL);

		a = a->next;
	}

	return (NULL);
}

/**
 * linear_skip - searches for a value in a sorted skip list using Jump search
 * @list: a pointer to the head of the list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where @value is located. If value is not
 * present or if list is NULL, returns NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *a = NULL, *b = NULL;

	if (!list)
		return (NULL);

	a = list;
	b = a->express;

	while (b)
	{
		printf("Value checked at index [%ld] = [%d]\n", b->index, b->n);
		if (b->n < value)
		{
			a = b;
			b = b->express;
		}
		else
		{
			break;
		}
	}

	if (!b)
	{
		b = a;
		while (b->next)
			b = b->next;
	}

	return (linear_skip_ls(a, b, value));
}
