#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be checked
 * @accept: the string of bytes to match
 *
 * Return: the number of characters in the initial segment of s which consist
 * only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	char *accept_cpy;
	int in;

	/* for every character in s, check if it is in accept*/
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
			res++;
		else
			break;
	}

	return (res);
}
