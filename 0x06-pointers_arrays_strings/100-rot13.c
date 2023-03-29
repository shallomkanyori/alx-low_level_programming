#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: The string to be encoded
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *s)
{
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encoding = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = encoding[j];
				break;
			}
		}
	}

	return (s);
}
