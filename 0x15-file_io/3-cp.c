#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void copy_file(int from_fd, int to_fd, char *argv[]);
void display_error(int from, int to, char *argv[]);

/**
 * main - Copies the content of a file to another file
 * @argc: the number of program arguments
 * @argv: the program arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		display_error(-1, 0, argv);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		display_error(0, -1, argv);
	}

	copy_file(from_fd, to_fd, argv);

	return (0);
}

/**
 * copy_file - Copies the contents of a file to another file
 * @from_fd: the file descriptor of the file to copy from
 * @to_fd: the file descriptor of the file to copy to
 * @argv: the program arguments
 *
 * Return: nothing. Exit with status 98 if cannot read from file_from.
 * Exit with status 99 if cannot write to file_to
 * Exit with status 100 if cannot close a file descriptor.
 */
void copy_file(int from_fd, int to_fd, char *argv[])
{
	char buffer[BUFF_SIZE];
	ssize_t chars_read, chars_written;

	chars_read = BUFF_SIZE;
	while (chars_read == BUFF_SIZE)
	{
		chars_read = read(from_fd, buffer, BUFF_SIZE);
		if (chars_read == -1)
		{
			display_error(-1, 0, argv);
		}

		chars_written = write(to_fd, buffer, chars_read);
		if (chars_written == -1)
		{
			display_error(0, -1, argv);
		}
	}

	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}

	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
}

/**
 * display_error - displays appropriate error message
 * @from: -1 if file_from has an error
 * @to: -1 if file_to has an error
 * @argv: the program arguments
 *
 * Return: nothing.
 */
void display_error(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
