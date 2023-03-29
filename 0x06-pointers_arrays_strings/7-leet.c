#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: The string to be encoded
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *s)
{
	char *letters = "aAeEoOtTlL";
	char *encoding = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
				s[i] = encoding[j];
		}
	}

	return (s);
}
