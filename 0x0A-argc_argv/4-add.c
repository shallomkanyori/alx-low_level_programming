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

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (strcmp(argv[i], "0") != 0 && num <= 0)
		{
			puts("Error");
			return (1);
		}

		res += num;
	}

	if (argc <= 2)
		res = 0;

	printf("%d\n", res);
	return (0);
}
