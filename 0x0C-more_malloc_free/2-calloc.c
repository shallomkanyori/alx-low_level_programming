#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc and initializes
 * it to zero.
 * @nmemb: the number of elements in the array to be created
 * @size: the size of each element in the array to be created
 *
 * Return: A pointer to the allocated memory if succcessful. Otherwise, NULL.
 * If nmemb or size is 0, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;

	if (nmemb == 0 || size == 0)
		return (NULL);

	res = malloc(size * nmemb);

	if (res != NULL)
		memset(res, 0, size * nmemb);

	return (res);
}
