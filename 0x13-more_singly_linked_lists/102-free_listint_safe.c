#include "lists.h"
#include <stdlib.h>

/**
 * find_loop_start2 - returns the node at which a loop starts in a listint_t
 * list
 * @head: the pointer to the head node
 *
 * Return: the node at which the loop starts, or NULL if there is no loop.
 */
listint_t *find_loop_start2(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
	}

	if (slow == fast)
	{
		slow = head;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}

		return (slow);
	}

	return (NULL);
}

/**
 * free_listint_safe - frees a listint_t list that may contain a loop
 * @h: the pointer to the pointer to the head node
 *
 * Return: the size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *curr;
	listint_t *tmp;
	listint_t *loop_start = NULL;
	int num_nodes = 0;
	int once = 0;

	if (h == NULL)
		return (0);

	curr = *h;
	loop_start = find_loop_start2(*h);

	while (curr != NULL)
	{
		if (curr == loop_start)
		{
			if (once)
				break;

			once = 1;
		}

		num_nodes++;
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}

	*h = NULL;
	return (num_nodes);
}
