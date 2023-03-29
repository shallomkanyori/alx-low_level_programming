#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: The array of integers
 * @n: The number of elements of the array
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int tmp;

	for (; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
