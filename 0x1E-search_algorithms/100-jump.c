#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an integer array using Jump search
 * @array: the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where @value is located. If value is not present
 * or if array is NULL, returns -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b, step;

	if (!array)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", 0, array[0]);
	if (value < array[0])
		return (-1);

	a = 0;
	step = (size_t)sqrt(size);
	b = step;

	while (b < size && array[b] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		a = b;
		b += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (a < size)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);

		if (a == b)
			return (-1);

		a += 1;
	}

	return (-1);
}
