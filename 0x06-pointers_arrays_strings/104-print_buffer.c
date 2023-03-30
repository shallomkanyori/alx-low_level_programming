#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: The buffer
 * @size: The number of bytes of the buffer to print
 *
 * Description: Prints 10 bytes per line. Each line has the following format:
 * First byte of the line in hexadecimal (8 chars), starting with 0,
 * hexadecimal content (2 chars), 2 bytes at a time, space separated,
 * content, print if byte is printable character, otherwise print '.',
 * a new line.
 * Return: nothing.
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;

	if (size <= 0)
		putchar('\n');

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		for (j = 0; j < 10 && (i + j) < size; j++)
		{
			if (b[i + j] >= 32 && b[i + j] <= 126)
				putchar(b[i + j]);
			else
				putchar('.');
		}

		putchar('\n');
	}
}
