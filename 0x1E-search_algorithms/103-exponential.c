#include "search_algos.h"

/**
 * e_print_array - prints a subarray of an array
 * @array: the array
 * @s: the index to start printing at
 * @e: the index to stop printing at
 */
void e_print_array(int *array, size_t s, size_t e)
{
	size_t i;

	if (!array)
		return;

	for (i = s; i < e; i++)
	{
		if (i > s)
			printf(", ");
		printf("%d", array[i]);
	}

	printf("\n");
}

/**
 * e_binary_search - searches for a value in an integer array, Binary search
 * @array: the array
 * @value: the value to search for
 * @s: the start index
 * @e: the end index
 *
 * Return: the first index where @value is located. If value is not present
 * or if array is NULL, returns -1.
 */
int e_binary_search(int *array, int value, size_t s, size_t e)
{
	size_t start, end, mid;

	if (!array)
		return (-1);

	start = s;
	end = e - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		e_print_array(array, start, end + 1);

		mid = (start + end) / 2;
		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * exponential_search - searches for value in sorted integer array, exponential
 * @array: the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where @value is located. If value is not present
 * or if array is NULL, returns -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t min;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;

	}

	min = (bound + 1) > size ? size : (bound + 1);
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, min - 1);

	return (e_binary_search(array, value, bound / 2, min));
}
