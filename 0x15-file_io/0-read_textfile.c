#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: the name of the file
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of leters read and printed. If file cannot be
 * opened or if filename is NULL, return 0. If write fails or is interupted,
 * return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t res = 0;
	ssize_t chars_read = 0;
	ssize_t chars_written = 0;
	char buffer[BUFF_SIZE];
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (letters > 0 && (chars_read = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		if ((size_t)chars_read > letters)
		{
			chars_read = letters;
		}

		chars_written = write(STDOUT_FILENO, buffer, chars_read);
		if (chars_written != chars_read)
			return (0);

		res += chars_written;
		letters -= chars_written;
	}

	if (chars_read == -1)
		return (0);

	close(fd);

	return (res);
}
