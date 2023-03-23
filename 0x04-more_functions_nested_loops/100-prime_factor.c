#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;

	print_largest_prime_factor(num);
	return (0);
}

/**
 * print_largest_prime_factor - finds and prints the largest prime factor of a
 * number
 * @num: The number whose largest prime factor is to be printed
 *
 * Return: void
 */
void print_largest_prime_factor(long num)
{
	long max_prime;
	int i;

	/* remove all occurrences of the prime factor 2 */
	while (num % 2 == 0)
	{
		max_prime = 2;
		num /= 2;
	}

	/* remove all ocurrences of all remaining odd prime factors */
	for (i = 3; i < sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max_prime = i;
			num /= i;
		}
	}

	/* handle when num is a prime number greater than 2 */
	if (num > 2)
		max_prime = num;

	printf("%ld\n", max_prime);
}
