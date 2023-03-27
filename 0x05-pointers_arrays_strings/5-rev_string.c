#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: The string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char tmp;

	while (*end)
		end++;

	end--;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
