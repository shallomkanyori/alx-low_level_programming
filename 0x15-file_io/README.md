## C - File I/O

- **Task 0: Tread lightly, she is near.** Write a function that reads a text file and prints it a given number of letters to the `POSIX` standard output. It should return the actual number of letters it could read and print. If the given file can not be opened or read, return `0`. If the given filename is `NULL`, return `0`. If `write` fails or does not write the expected amount of bytes, return `0`.

- **Task 1: Under the snow.** Create a function that creates a file and returns `1` on success and `-1` on failure. The created file must have the permissions `rw-------`. If the file already exists, do not change the permissions. If the file already exists, truncate it. If the given filename is `NULL`, return `-1`. If the given text content is `NULL`, create an empty file.

- **Task 2: Speak gently, she can hear.** Write a function that append text at the end of a file and returns `1` on success and `-1` on failure. Do not create the file if it does not exist. If the given filename is `NULL`, return `-1`. If the text content is `NULL` do not add anything to the file; return `1` if the file exists and `-1` if it doesn't or if you do not have the required permissions to write the file.

- **Task 3: cp.** Write a program that copies the content of a file to another file. Usage: `cp file_from file_to`. If `file_to` already exists, truncate it. If unable to read from `file_from`, exit with code `98` and print error message to stderr. If unable to write to `file_to`, exit with code `99` and print error message to stderr. If unable to close a file descriptor, exit with code `100` and print error message to stderr. Permissions of the created file: `rw-rw-r--`. If the file already exists, do not change the permissions. Use a buffer to read `1024` bytes at a time from `file_from` to make less system calls.

**Task 4: elf.** Write a program that displays the information contained in the `ELF` header at the start of an `ELF` file.
- Usage: `elf_header elf_filename`.
- Displayed information (no less, no more, do not include trailing whitespace): Magic, Class, Data, Version, OS/ABI, ABI Version, Type, Entry point address.
- Foramt: the same as `readelf -h` (version `2.26.1`).
- If the file is not an `ELF` file, or on error, exit with a status code of `98` and display a comprehensive error message to `stderr`.
- You are allowed to use `lseek` once.
- You are allowed to use `read` a maximum of 2 times at runtime.
- You are allowed to have as many funcitons as you want in your source file.
