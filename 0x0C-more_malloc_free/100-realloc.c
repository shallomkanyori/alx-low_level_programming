#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the pointer to the memory previously allocated with a call to malloc
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Return: A pointer to the new memory block. If new_size is equal to old_size,
 * return ptr. If new_size is equal to zero, and ptr is not NULL, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res;
	int min;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	res = malloc(new_size);

	if (res == NULL)
		return (NULL);

	if (ptr == NULL)
		return (res);

	min = old_size < new_size ? old_size : new_size;

	memcpy(res, ptr, min);
	free(ptr);

	return (res);
}
