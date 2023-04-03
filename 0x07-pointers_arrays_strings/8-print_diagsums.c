#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonal of a square matrix of
 * integers
 * @a: the pointer to the first element of the matrix
 * @size: the number of rows or columns in the matrix
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	long diag1 = 0;
	long diag2 = 0;
	int i;
	/* &a[row][col] = a + (row * size + col) */

	/*diag1 = a[0][0] + a[1][1] + ... + a[size - 1][size - 1]*/
	for (i = 0; i < size; i++)
		diag1 += *(a + (i * size + i));

	/*diag2 = a[size - 1][0] + a[size - 2][1] + ... + a[0][size - 1]*/
	for (i = 0; i < size; i++)
		diag2 += *(a + ((size - i - 1) * size + i));

	printf("%ld, %ld\n", diag1, diag2);
}
