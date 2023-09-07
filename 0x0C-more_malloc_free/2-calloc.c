#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = malloc(nmemb * size);

	if (b == NULL)
		return (NULL);

	for (y = 0; y < (nmemb * size); y++)
		b[y] = 0;

	return (b);
}
