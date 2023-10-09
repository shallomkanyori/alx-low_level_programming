#include "search_algos.h"

/**
 * print_array - prints a subarray of an array
 * @array: the array
 * @s: the index to start printing at
 * @e: the index to stop printing at
 */
void print_array(int *array, size_t s, size_t e)
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
 * binary_search - searches for a value in an integer array using Binary search
 * @array: the array
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where @value is located. If value is not present
 * or if array is NULL, returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (!array)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		print_array(array, start, end + 1);

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
