#include <stdio.h>

/**
 * main - prints all arguments it receives, one per line, ending with a new
 * line
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
