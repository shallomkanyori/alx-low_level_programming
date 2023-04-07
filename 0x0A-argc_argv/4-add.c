#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: the number of program arguments
 * @argv: the program arguments
 *
 * Return: 1 if one of the numbers contains symbols that are not digits,
 * otherwise 0.
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int num;
	int i;
	char *endptr;

	for (i = 1; i < argc; i++)
	{
		num = (int)strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num < 0)
		{
			puts("Error");
			return (1);
		}

		res += num;
	}

	printf("%d\n", res);
	return (0);
}
