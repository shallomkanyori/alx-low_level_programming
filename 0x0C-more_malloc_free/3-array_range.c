#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers containing the range [min, max]
 * @min: the start of the range
 * @max: the end of the range
 *
 * Return: A pointer to the newly created array. If it fails or if min > max,
 * return NULL.
 */
int *array_range(int min, int max)
{
	int *res;
	int i;

	if (min > max)
		return (NULL);

	res = malloc(sizeof(int) * (max - min + 1));

	if (res == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		res[i - min] = i;

	return (res);
}
