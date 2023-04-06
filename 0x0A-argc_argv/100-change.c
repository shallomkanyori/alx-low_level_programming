#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of
 * money
 * @argc: the number of program arguments
 * @argv: the program arguments
 *
 * Return: 1 if the number of arguments passed into this program are not
 * exactly 2, otherwise 0.
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int res = 0;
	int cents;
	int count;
	int i;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);
	for (i = 0; i < 5 && cents > 0; i++)
	{
		count = cents / coins[i];
		res += count;
		cents -= coins[i] * count;
	}

	printf("%d\n", res);
	return (0);
}
