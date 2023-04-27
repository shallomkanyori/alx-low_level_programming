#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the pointer of the head node
 * @str: the string data of the new node
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *res = malloc(sizeof(list_t));

	if (res == NULL)
		return (NULL);

	res->str = str != NULL ? strdup(str) : NULL;

	if (res->str == NULL && str != NULL)
	{
		free(res);
		return (NULL);
	}

	res->len = str != NULL ? strlen(res->str) : 0;
	res->next = *head;
	*head = res;

	return (res);
}
