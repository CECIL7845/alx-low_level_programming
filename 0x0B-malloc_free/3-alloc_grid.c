#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **gridout;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	gridout = malloc(sizeof(int *) * height);

	if (gridout == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		gridout[a] = malloc(sizeof(int) * width);

		if (gridout[a] == NULL)
		{
			for (; a >= 0; a--)
				free(gridout[a]);

			free(gridout);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			gridout[a][b] = 0;
	}

	return (gridout);
}
