#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int i = 1;
	unsigned char *test_endian = (unsigned char *)&i;

	/* if big endian, int is stored msb first and vice versa for little endian */
	return (*test_endian == 1);
}
