#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *ay;
	int m;

	if (min > max)
		return (NULL);

	ay = malloc(sizeof(*ay) * ((max - min) + 1));

	if (ay == NULL)
		return (NULL);

	for (m = 0; min <= max; m++, min++)
		ay[m] = min;

	return (ay);
}
