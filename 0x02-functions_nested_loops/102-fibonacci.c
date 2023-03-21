#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_50_fibonacci();
	return (0);
}

/**
 * print_50_fibonacci - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: void
 */
void print_50_fibonacci(void)
{
	int i;
	long int sum;
	long int n_1 = 1;
	long int n_2 = 2;

	printf("%lu, %lu, ", n_1, n_2);

	for (i = 2; i < 50; i++)
	{
		sum = n_1 + n_2;
		n_1 = n_2;
		n_2 = sum;

		if (i == 49)
			printf("%lu\n", sum);
		else
			printf("%lu, ", sum);
	}
}
