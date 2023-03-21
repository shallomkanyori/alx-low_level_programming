#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if the character is a letter. 0 otherwise.
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		result = 1;
	else
		result = 0;

	return (result);
}
