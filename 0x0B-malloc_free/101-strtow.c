#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * num_words - returns the number of words in a string
 * @str: the string, words are space separated
 *
 * Return: the number of words in str.
 */
int num_words(char *str)
{
	int i;
	int in = 0;
	int res = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			res += in ? 1 : 0;
			in = 0;
		}
		else
		{
			in = 1;
		}
	}

	res += in ? 1 : 0;
	return (res);
}

/**
 * add_word - adds a word to an array
 * @res: the array
 * @res_ind: the index of the array to add the string
 * @str: the string containing the word to be added, words are space separated
 * @s_ind: the index in str to start adding from
 *
 * Return: the index at the end of the word being added.
 * Returns -1 if malloc returns NULL.
 */
int add_word(char **res, int res_ind, char *str, int s_ind)
{
	int word_len = 0;
	int j;

	for (j = s_ind; str[j] && str[j] != ' '; j++)
		word_len++;

	res[res_ind] = malloc((sizeof(char) * word_len) + 1);

	if (res[res_ind] == NULL)
		return (-1);

	for (j = 0; j < word_len; j++)
		res[res_ind][j] = str[s_ind + j];

	res[res_ind][j] = '\0';
	return (s_ind + word_len - 1);
}

/**
 * strtow - splits a string into words
 * @str: the string to split, words are space separated
 *
 * Return: A pointer to an array of null-terminated strings or NULL if it
 * fails. Returns NULL if str is NULL or str is empty.
 */
char **strtow(char *str)
{
	char **res;
	int i;
	int len;
	int ind;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	len = num_words(str);

	res = malloc((sizeof(char *) * len) + 1);

	if (res == NULL)
		return (NULL);

	ind = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;

		i = add_word(res, ind, str, i);

		if (i == -1)
		{
			for (; ind >= 0; ind--)
				free(res[ind]);

			free(res);
			return (NULL);
		}

		ind++;
	}

	res[ind] = NULL;
	return (res);
}
