#include "main.h"

/**
 * print_triangle - prints a triangle, using the character '#', followed by a
 * new line
 * @size: The size of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < (size - row - 1); col++)
			_putchar(' ');

		for (; col < size; col++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
