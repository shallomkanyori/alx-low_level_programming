#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of this program
 * @ac: the number of arguments
 * @av: the arguments
 *
 * Return: A pointer to the new string. Returns NULL if it fails. Returns NULL
 * if ac is 0 or av is NULL.
 */
char *argstostr(int ac, char **av)
{
	char *res;
	int i;
	int j;
	int ind = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	res = malloc((sizeof(char) * (len + ac)) + 1);

	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, ind++)
			res[ind] = av[i][j];

		res[ind] = '\n';
		ind++;
	}

	res[ind] = '\0';
	return (res);
}
