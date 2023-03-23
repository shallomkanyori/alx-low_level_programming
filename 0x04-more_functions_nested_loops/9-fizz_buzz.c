#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	print_fizz_buzz();
	return (0);
}

/**
 * print_fizz_buzz - prints the numbers from 1 to 100, space separated,
 * followed by a new line.
 *
 * Description: Prints Fizz instead of multiples of three and Buzz instead of
 * multiples of five. Prints FizzBuzz intead of multiples of both three and
 * five.
 * Return: void.
 */
void print_fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);

		if (i % 3 == 0)
			printf("Fizz");

		if (i % 5 == 0)
			printf("Buzz");

		if (i == 100)
			putchar('\n');
		else
			putchar(' ');
	}
}
