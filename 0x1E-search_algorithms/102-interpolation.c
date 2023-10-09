#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - interpolation searches for a value in an int array
 * @array: the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where @value is located. If value is not present
 * or if array is NULL, returns -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while ((array[low] != array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		printf("Value checked array[%ld] ", mid);
		if (mid >= size)
		{
			printf("is out of range\n");
			return (-1);
		}
		printf("= [%d]\n", array[mid]);

		if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
		else
			return (mid);
	}

	return (-1);
}
