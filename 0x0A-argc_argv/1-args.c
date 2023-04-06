#include <stdio.h>

/**
 * main - prints the number of arguments passed into this program
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
