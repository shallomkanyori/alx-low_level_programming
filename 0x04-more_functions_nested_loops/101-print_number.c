#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int divisor; /* power of ten to divide by */
	int digit;
	unsigned int u_num;

	if (n < 0)
	{
		_putchar('-');
		u_num = (unsigned int)(-n);
	}
	else
	{
		u_num = (unsigned int)n;
	}

	divisor = 1;
	while (u_num / divisor >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		digit = u_num / divisor;
		_putchar(digit + '0');

		u_num -= digit * divisor;
		divisor /= 10;
	}
}
