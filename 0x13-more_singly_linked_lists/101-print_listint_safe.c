#include "lists.h"
#include <stdio.h>

/**
 * find_loop_start - returns the node at which a loop starts in a listint_t
 * list
 * @head: the pointer to the head node
 *
 * Return: the node at which the loop starts, or NULL if there is no loop.
 */
const listint_t *find_loop_start(const listint_t *head)
{
	const listint_t *fast = head;
	const listint_t *slow = head;

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
 * print_listint_safe - prints a listint_t linked list that may contain a loop
 * @head: the pointer to the head node
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head;
	const listint_t *loop_start = find_loop_start(head);
	int num_nodes = 0;
	int once = 0;

	while (curr != NULL)
	{
		if (curr == loop_start)
		{
			if (once)
				break;

			once = 1;
		}

		num_nodes++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
	}

	if (loop_start != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);
	}

	return (num_nodes);
}
