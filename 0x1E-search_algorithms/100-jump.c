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
	size_t a, b, step, min;

	if (!array)
		return (-1);

	a = 0;
	step = (size_t)sqrt(size);
	b = 0;

	min = b;
	while (array[min] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", min, array[min]);

		a = b;
		b += step;
		if (a >= size)
			return (-1);

		min = (b > size ? size - 1 : b);
		if (min == a)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	min = (b + 1) > size ? size : (b + 1);
	while (array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a += 1;
		if (a == min)
			return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	if (array[a] == value)
		return (a);

	return (-1);
}
