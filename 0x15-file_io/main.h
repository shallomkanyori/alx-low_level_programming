#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */
