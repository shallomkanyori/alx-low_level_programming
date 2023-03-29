#include "main.h"

/**
 * print_number - prints an integer
 * @n: The number to print
 *
 * Return: nothing.
 */
void print_number(int n)
{
	int divisor;
	int digit;
	unsigned int u_n;

	if (n < 0)
	{
		_putchar('-');
		u_n = (unsigned int)(-n);
	}
	else
	{
		u_n = (unsigned int)n;
	}

	divisor = 1;
	while (u_n / divisor >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		digit = u_n / divisor;
		_putchar(digit + '0');

		u_n %= divisor;
		divisor /= 10;
	}
}
