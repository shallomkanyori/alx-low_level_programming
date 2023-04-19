#include "function_pointers.h"

/**
 * array_iterator - executes a function 'action', on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: the pointer to the function to execute
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
