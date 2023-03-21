#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The number until which to print the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					_putchar((i * j) + '0');
				else
					print_number(i * j);

				if (j == n)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}

/**
 * print_number - prints a number as comma separated and right-aligned
 * @num: The number to be printed
 *
 * Return: void
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num < 100)
	{
		_putchar(' ');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar((num / 100) + '0');
		_putchar((num / 10 % 10) + '0');
		_putchar((num % 10) + '0');
	}
}
