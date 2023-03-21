#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_35_multiple_sum();
	return (0);
}

/**
 * print_35_multiple_sum - prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: void
 */
void print_35_multiple_sum(void)
{
	int sum = 0;
	int i;

	for (i = 3; i < 1024; i += 3)
		sum += i;

	for (i = 5; i < 1024; i += 5)
	{
		if ((i % 3) != 0)
			sum += i;
	}

	printf("%d\n", sum);
}
