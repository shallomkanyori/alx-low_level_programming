#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates s1 with at most n bytes from s2
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to concatenate
 *
 * Return: A pointer to the new string if malloc is successful.
 * Otherwise, NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	int i;
	int j;
	int len1;
	int len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	res = malloc(sizeof(char) * (len1 + len2) + 1);

	if (res == NULL)
		return (NULL);

	i = 0;
	for (; s1[i]; i++)
		res[i] = s1[i];

	for (j = 0; s2[j] && (n - j) > 0; j++, i++)
		res[i] = s2[j];

	res[i] = '\0';
	return (res);
}
