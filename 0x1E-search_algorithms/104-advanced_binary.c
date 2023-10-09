#include "search_algos.h"

/**
 * b_print_array - prints a subarray of an array
 * @array: the array
 * @s: the index to start printing at
 * @e: the index to stop printing at
 */
void b_print_array(int *array, size_t s, size_t e)
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
 * bs_rec - binary searches an integer array recursively
 * @array: the array
 * @start: the index to start searching
 * @end: the index to stop searching
 * @value: the value to search for
 *
 * Return: the first index where @value is located. If value is not present
 * or if array is NULL, returns -1.
 */
int bs_rec(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (start > end)
		return (-1);

	printf("Searching in array:");
	b_print_array(array, start, end + 1);

	mid = (start + end) / 2;
	if (array[mid] > value)
		return (bs_rec(array, start, mid - 1, value));
	else if (array[mid] < value)
		return (bs_rec(array, mid + 1, end, value));
	else if (end > (start + 1))
		return (bs_rec(array, start, mid, value));
	else
		return (mid);

	return (-1);
}

/**
 * advanced_binary - binary searches an integer array
 * @array: the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where @value is located. If value is not present
 * or if array is NULL, returns -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (bs_rec(array, 0, size - 1, value));
}
