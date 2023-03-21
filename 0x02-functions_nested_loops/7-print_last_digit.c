#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number whose last digit is to be printed
 *
 * Return: The value of the last digit of the number.
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;

	if (result < 0)
		result *= -1;

	_putchar(result + '0');
	return (result);
}
