#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of program arguments
 * @argv: the program arguments
 *
 * Return: 1 if the program does not receive two arguments, otherwise 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
