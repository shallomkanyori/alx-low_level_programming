## C - File I/O

- **Task 0: Tread lightly, she is near.** Write a function that reads a text file and prints it a given number of letters to the `POSIX` standard output. It should return the actual number of letters it could read and print. If the given file can not be opened or read, return `0`. If the given filename is `NULL`, return `0`. If `write` fails or does not write the expected amount of bytes, return `0`.

- **Task 1: Under the snow.** Create a function that creates a file and returns `1` on success and `-1` on failure. The created file must have the permissions `rw-------`. If the file already exists, do not change the permissions. If the file already exists, truncate it. If the given filename is `NULL`, return `-1`. If the given text content is `NULL`, create an empty file.
