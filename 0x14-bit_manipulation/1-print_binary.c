#include "main.h"

/**
 * print_binary_rec - prints the binary representation of a number recursively
 * @n: the number
 *
 * Return: nothing.
 */
void print_binary_rec(unsigned long int n)
{
	if ((n >> 1) == 0)
	{
		_putchar((n & 1) + '0');
		return;
	}

	print_binary_rec(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	print_binary_rec(n);
}
