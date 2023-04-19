#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints it opcodes
 * @argc: the number of program arguments
 * @argv: the program arguments
 *
 * Return: If the number of arguments is not 2, exit with the status 1. If the
 * number of bytes is negative, exit with the status 2. Otherwise return 0.
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	char *main_ptr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		if (i != 0)
			printf(" ");

		printf("%02x", *(main_ptr + i) & 0xff);
	}

	printf("\n");
	return (0);
}
