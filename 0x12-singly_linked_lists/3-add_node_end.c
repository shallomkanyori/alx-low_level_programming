#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the pointer that points to the head node
 * @str: the string data of the new node
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *res = malloc(sizeof(list_t));
	list_t *last = *head;

	if (res == NULL)
		return (NULL);

	res->str = str != NULL ? strdup(str) : NULL;

	if (res->str == NULL && str != NULL)
	{
		free(res);
		return (NULL);
	}

	res->len = str != NULL ? strlen(str) : 0;
	res->next = NULL;

	if (*head == NULL)
	{
		*head = res;
		return (res);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = res;
	return (res);
}
