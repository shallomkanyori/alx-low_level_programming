#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates and initializes a 2D integer array
 * @width: the width of the grid(2D array)
 * @height: the height of the grid
 *
 * Return: A pointer to a 2D integer array. Returns NULL on failure of if
 * width or height are less than or equal to 0.
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int row;
	int col;

	if (width <= 0 || height <= 0)
		return (NULL);

	res = malloc(sizeof(int *) * height);

	if (res == NULL)
	{
		free(res);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		res[row] = malloc(sizeof(int) * width);

		if (res[row] == NULL)
		{
			for (; row >= 0; row--)
				free(res[row]);

			free(res);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
		for (col = 0; col < width; col++)
			res[row][col] = 0;

	return (res);
}
