## C - More pointers, arrays and strings

- **Task 0: strcat.** Write a function that concatenates two strings and returns a pointer to the resulting string.
- **Task 1: strncat.** Write a function that concatenates two strings using at most `n` bytes from `src` and returns a pointer to the resulting string.
- **Task 2: strncpy.** Write a function that copies a string that works exactly like `strncpy`.
- **Task 3: strcmp.** Write a function that compares two strings that works exactly like `strcmp`.
- **Task 4: I am a kind of paranoid in reverse. I suspect people of plotting to make me happy.** Write a function that reverses the content of an array of integers
- **Task 5: Always look up.** Write a function that changes all lowercase letters of a string to uppercase.
- **Task 6: Expect the best. Prepare for the worst. Capitalize on what comes.** Write a function that capitalizes all words of a string. Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`, `)`, `{`, and `}`.
- **Task 7: Mozart composed his music not for the elite, but for everybody.** Write a function that encodes a string into 1337 using only one `if` statement and only two loops without using `switch` or any ternary operation.

- **Task 8: rot13.** Write a function that encodes a string using rot13 using only one `if` statement and only two loops without using `switch` or any ternary operation.
- **Task 9: Numbers have life; they're not just symbols on paper.** Write a function that prints an integer using only the \_putchar function to print, without using `long`, arrays or pointers, or hard-coded special values.
- **Task 10: A dream doesn't become reality through magic; it takes sweat, determination and hard work.** Add one line to the given code so that the program prints `a[2] = 98`, followed by a new line. Add only one statement on line 19. You are not allowed to use the variable `a`, nor modify the variable `p`. You are not allowed to use `,`.
- **Task 11: It is the addition of strangeness to beauty that constitutes the romatic character in art.** Write a function that adds two numbers expressed as strings and returns a pointer to the result if it can be stored in the given buffer `r`, otherwise it returns `0`. Assume the strings will never be empty, will always contain only digits and will be numbers greater than or equal to `0`.
- **Task 12: Noise is a buffer, more effective than cubicles or booth walls.** Write a function that prints a buffer 10 bytes per line. Each line should have the foollowing format:
	- first byte of the line in hexadecimal (8 chars), starting with 0
	- hexadecimal of content (2 chars), 2 bytes at a time, space separated
	- contents, print character if byte is a printable character, otherwise, print `.`
	- a new line;
