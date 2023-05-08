#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(const char *file_from, const char *file_to, int from_fd,
		int to_fd);

#endif /* MAIN_H */
