#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string containing the characters to match
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *res = 0;
	char *accept_cpy;
	int in;

	for (; *s; s++)
	{
		accept_cpy = accept;
		in = 0;

		for (; *accept_cpy; accept_cpy++)
		{
			if (*s == *accept_cpy)
			{
				in = 1;
				break;
			}
		}

		if (in)
		{
			res = s;
			break;
		}
	}

	return (res);
}
