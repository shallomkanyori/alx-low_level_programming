#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the content to add at the end of the file
 *
 * Return: 1 on success, -1 no failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
