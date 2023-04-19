#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: the pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which cmp does not return 0.
 * If no element matches or if size is less than or equal to 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int i;

	if (size <= 0)
		return (-1);

	index = -1;
	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				index = i;
				break;
			}
		}
	}

	return (index);
}
