#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t list
 * @head: pointer to the first node in the list
 *
 * Return: the sum of all the data in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int res = 0;

	while (curr)
	{
		res += curr->n;
		curr = curr->next;
	}

	return (res);
}
