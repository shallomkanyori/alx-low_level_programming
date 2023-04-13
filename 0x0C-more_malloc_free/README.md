## C - More malloc, free

- **Task 0: Trust no one.** Write a function that allocates memory using `malloc` and returns a pointer to the allocated memory. If `malloc` fails, it should cause normal process termination with a status value of `98`.
- **Task 1: string\_nconcat.** Write a function that concatenates two strings and returns a pointer to the new string which contains the first string concatenated with at most `n` bytes from the second string, null terminated. It should return `NULL` if it fails. If `NULL` is passed, treat it as an empty string.
- **Task 2: \_calloc.** Write a function that allocates memory for an array using `malloc` and returns a pointer to the allocated memory. It should set the memory to zero. If it fails, or if the number of elements or the size of each element is zero, it should return `NULL`.
