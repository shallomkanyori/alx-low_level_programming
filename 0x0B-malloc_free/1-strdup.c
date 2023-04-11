#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: A pointer to the duplicated string if sufficient memory is
 * available. Returns NULL if str is NULL or insufficient memory available.
 */
char *_strdup(char *str)
{
	char *res;
	int i;
	int len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	res = malloc((sizeof(char) * len) + 1);

	if (res == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		res[i] = str[i];

	res[i] = '\0';
	return (res);
}
