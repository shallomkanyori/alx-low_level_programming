#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: the name of the new file
 * @text_content: the content to write to the new file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
