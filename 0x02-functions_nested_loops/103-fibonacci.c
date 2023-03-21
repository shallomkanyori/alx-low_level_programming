#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_even_sum_fibonacci();
	return (0);
}

/**
 * print_even_sum_fibonacci - prints the sum of the even-valued terms
 * of the Fibonacci sequence
 *
 * Return: void
 */
void print_even_sum_fibonacci(void)
{
	int even_sum = 0;
	int n_1 = 1;
	int n_2 = 2;
	int c;

	while (n_2 <= 4000000)
	{
		if (n_2 % 2 == 0)
			even_sum += n_2;

		c = n_1 + n_2;

		n_1 = n_2;
		n_2 = c;
	}

	printf("%d\n", even_sum);
}
