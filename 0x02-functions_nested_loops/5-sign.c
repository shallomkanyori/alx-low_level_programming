#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number whose sign is to be printed
 *
 * Return: 1 if positive, 0 if 0, -1 if negative
 */
int print_sign(int n)
{
	int result;
	char sign;

	if (n > 0)
	{
		result = 1;
		sign = '+';
	}
	else if (n == 0)
	{
		result = 0;
		sign = '0';
	}
	else
	{
		result = -1;
		sign = '-';
	}

	_putchar(sign);

	return (result);
}
