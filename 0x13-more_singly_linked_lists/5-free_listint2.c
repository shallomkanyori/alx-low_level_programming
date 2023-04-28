#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: the pointer to the pointer to the head node
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *h = *head;

	while (h != NULL)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}

	*head = NULL;
}
