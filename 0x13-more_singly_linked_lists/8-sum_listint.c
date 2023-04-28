#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: the pointer to the head node
 *
 * Return: the sum of all the data in the list or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *h = head;
	int res = 0;

	while (h != NULL)
	{
		res += h->n;
		h = h->next;
	}

	return (res);
}
