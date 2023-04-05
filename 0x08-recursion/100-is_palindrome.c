#include "main.h"

/**
 * to_end - recursively moves pointer to end of string
 * @a: the pointer to beginning of string
 *
 * Return: a pointer to the character before '\0' of string.
 */
char *to_end(char *a)
{
	if (*a == '\0')
		return (--a);

	return (to_end(++a));
}

/**
 * is_palindrome_two - checks if a string is a palindrome
 * @s: the pointer to the beginning of the string
 * @e: the pointer to the end of the string
 *
 * Return: 1 if string is palindrome, otherwise 0.
 */
int is_palindrome_two(char *s, char *e)
{
	if (s == e)
		return (1);

	if (*s != *e)
		return (0);

	if (s == (e - 1))
		return (1);

	return (is_palindrome_two(++s, --e));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	char *s_copy = s;

	if (*s == '\0')
		return (1);

	s_copy = to_end(s_copy);

	return (is_palindrome_two(s, s_copy));
}
