#include "main.h"

/**
 * print_square - prints a square using the character #, followed by a new line
 * @size: The size of the square to be printed
 *
 * Return: void.
 */
void print_square(int size)
{
	int row;
	int col;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			_putchar('#');

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
