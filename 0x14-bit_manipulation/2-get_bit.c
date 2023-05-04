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
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;

	return ((n & mask) ? 1 : 0);
}
