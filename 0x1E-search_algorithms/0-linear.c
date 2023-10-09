#include "search_algos.h"

/**
 * linear_search - searches for a value in an integer array using Linear search
 * @array: the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where @value is located. If value is not present
 * or if array is NULL, returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
