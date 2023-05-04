#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index in a number
 * @n: the number
 * @index: the index
 *
 * Return: the value of the bit at index in n or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0)
		return (index == 0 ? 0 : -1);

	for (i = 0; i <= index; i++)
	{
		if ((n >> i) == 0)
			return (-1);
	}

	return ((n >> index) & 1);
}
