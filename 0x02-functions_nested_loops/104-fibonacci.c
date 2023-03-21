#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_98_fibonacci();
	return (0);
}

/**
 * print_98_fibonacci - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: void
 */
void print_98_fibonacci(void)
{
	unsigned long n_1 = 1;
	unsigned long n_2 = 2;
	unsigned long sum;
	int i;

	printf("%lu, %lu", n_1, n_2);

	for (i = 3; i < 92; i++)
	{
		sum = n_1 + n_2;
		n_1 = n_2;
		n_2 = sum;
		printf(", %lu", sum);
	}

	print_98_fibonacci_overflow(n_1, n_2);
	printf("\n");
}

/**
 * print_98_fibonacci_overflow - prints Fibonacci numbers 93 to 98
 * @n_1: 91st Fibonacci number
 * @n_2: 92nd Fibonacci number
 *
 * Return: void.
 */
void print_98_fibonacci_overflow(unsigned long n_1, unsigned long n_2)
{
	unsigned long n_1_head = n_1 / 1000000000;
	unsigned long n_1_tail = n_1 % 1000000000;
	unsigned long n_2_head = n_2 / 1000000000;
	unsigned long n_2_tail = n_2 % 1000000000;
	unsigned long sum_head;
	unsigned long sum_tail;
	int i;

	for (i = 92; i < 99; i++)
	{
		sum_head = n_1_head + n_2_head;
		sum_tail = n_1_tail + n_2_tail;

		if (sum_tail > 999999999)
		{
			sum_head += 1;
			sum_tail %= 1000000000;
		}

		printf(", %lu%lu", sum_head, sum_tail);

		n_1_head = n_2_head;
		n_1_tail = n_2_tail;
		n_2_head = sum_head;
		n_2_tail = sum_tail;
	}
}
