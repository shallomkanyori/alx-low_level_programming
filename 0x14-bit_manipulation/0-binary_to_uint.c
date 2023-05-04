#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsiged int decimal conversion of b, or 0 if b is NULL or b
 * contains characters other than 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int pow_2 = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		i++;
	}

	i--;
	while (i >= 0)
	{
		res += (b[i] - '0') * pow_2;
		pow_2 *= 2;
		i--;
	}

	return (res);
}
