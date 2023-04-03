#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the string to search for
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *res = 0;
	int haystack_len = 0;
	int needle_len = 0;
	int i;
	int j;

	for (i = 0; haystack[i]; i++)
		haystack_len++;

	for (i = 0; needle[i]; i++)
		needle_len++;

	for (i = 0; i <= (haystack_len - needle_len); i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (j == needle_len)
		{
			res = &haystack[i];
			break;
		}
	}

	return (res);
}
