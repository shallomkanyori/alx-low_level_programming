#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: First number to be printed
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{
		printf("%d, ", i);

		if (n > 98)
			i--;
		else
			i++;
	}

	printf("98\n");
}
