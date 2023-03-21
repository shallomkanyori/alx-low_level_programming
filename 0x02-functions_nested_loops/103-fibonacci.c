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
	int even_sum = 1;
	int n_1 = 1;
	int n_2 = 2;
	int f_sum = 3;

	while (f_sum < 4000000)
	{
		n_1 = n_2;
		n_2 = f_sum;

		if (f_sum % 2 == 0)
			even_sum += f_sum;

		f_sum = n_1 + n_2;
	}

	printf("%d\n", even_sum);
}
