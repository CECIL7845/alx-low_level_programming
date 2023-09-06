#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **allocout;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	allocout = malloc(height * sizeof(int *));
	if (allocout == NULL)
	{
		free(allocout);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		allocout[a] = malloc(width * sizeof(int));
		if (allocout[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(allocout[a]);
			free(allocout);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			allocout[b][b] = 0;

	return (allocout);
}
