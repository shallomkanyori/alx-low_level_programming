#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: the pointer to the pointer to the head node
 * @n: the integer data of the new node
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *res;

	if (head == NULL)
		return (NULL);

	res = malloc(sizeof(listint_t));
	if (res == NULL)
		return (NULL);

	res->n = n;
	res->next = *head;
	*head = res;

	return (res);
}
