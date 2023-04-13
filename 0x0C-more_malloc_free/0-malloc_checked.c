#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of memory to allocate
 *
 * Return: A pointer to the allocated memory if malloc is successful.
 * Otherwise, exit with status value 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL || b == 0)
		exit(98);

	return (ptr);
}
