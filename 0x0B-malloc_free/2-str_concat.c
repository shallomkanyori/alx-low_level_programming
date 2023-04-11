#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: A pointer to a newly allocated space in memory which contains the
 * null terminated concatenation of s1 and s2. Returns NUll on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int i;
	int j;
	int s1_len = 0;
	int s2_len = 0;

	for (i = 0; (s1 != NULL) && s1[i]; i++)
		s1_len++;

	for (j = 0; (s2 != NULL) && s2[j]; j++)
		s2_len++;

	res = malloc((sizeof(char) * (s1_len + s2_len)) + 1);

	if (res == NULL)
		return (NULL);

	i = 0;
	for (; (s1 != NULL) && s1[i]; i++)
		res[i] = s1[i];

	for (j = 0; (s2 != NULL) && s2[j]; j++, i++)
		res[i] = s2[j];

	res[i] = '\0';
	return (res);
}
