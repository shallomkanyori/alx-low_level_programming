#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: If c is lowercase, 1.
 * If c is not lowercase, 0
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
		result = 1;
	else
		result = 0;

	return (result);
}
