#include "search_algos.h"
#include <math.h>

/**
 * jump_list_ls - performs the linear search in Jump searching a linked list.
 * @a_node: a pointer to the start node
 * @b_node: a pointer to the end node
 * @value: the value to search for
 *
 * Return: a pointer to the first node where @value is located. If value is not
 * present or if list is NULL, returns NULL.
 */
listint_t *jump_list_ls(listint_t *a_node, listint_t *b_node, int value)
{
	printf("Value found between indexes [%ld] and [%ld]\n",
			a_node->index, b_node->index);
	while (a_node->n < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a_node->index, a_node->n);

		if (a_node == b_node)
			return (NULL);

		a_node = a_node->next;

		if (!a_node)
			return (NULL);
	}

	printf("Value checked array[%ld] = [%d]\n", a_node->index, a_node->n);
	if (a_node->n == value)
		return (a_node);

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
	listint_t *a_node = NULL, *b_node = NULL;
	size_t step, b;

	if (!list)
		return (NULL);

	step = (size_t)sqrt(size);
	a_node = list;
	b_node = list;

	while (b_node->next && b_node->index < step)
		b_node = b_node->next;

	b = 2;
	while (1)
	{
		printf("Value checked array[%ld] = [%d]\n", b_node->index, b_node->n);

		if (b_node->n < value)
		{
			a_node = b_node->next ? b_node : a_node;

			if (b_node->next == NULL)
				break;

			while (b_node->next && b_node->index < (b * step))
				b_node = b_node->next;

			b++;
		}
		else
		{
			break;
		}
	}

	return (jump_list_ls(a_node, b_node, value));
}
