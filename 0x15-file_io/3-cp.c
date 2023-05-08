#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	char *file_from;
	char *file_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	from_fd = open(file_from, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	file_to = argv[2];
	to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	copy_file(file_from, file_to, from_fd, to_fd);

	return (0);
}

/**
 * copy_file - Copies the contents of a file to another file
 * @file_from: the file to copy from
 * @file_to: the file to copy to
 * @from_fd: the file descriptor of the file to copy from
 * @to_fd: the file descriptor of the file to copy to
 *
 * Return: nothing. Exit with status 98 if cannot read from file_from.
 * Exit with status 99 if cannot write to file_to
 * Exit with status 100 if cannot close a file descriptor.
 */
void copy_file(const char *file_from, const char *file_to, int from_fd,
		int to_fd)
{
	char buffer[BUFF_SIZE];
	ssize_t chars_read, chars_written;

	while ((chars_read = read(from_fd, buffer, BUFF_SIZE)) > 0)
	{
		chars_written = write(to_fd, buffer, chars_read);
		if (chars_written == -1 || chars_written != chars_read)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (chars_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(from_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}

	if (close(to_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
}
