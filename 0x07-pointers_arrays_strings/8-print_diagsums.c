#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers.
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, b, x;

	i = 0;
	b = 0;

	for (x = 0; x < size; x++)
	{
		i = i + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		b += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", i, b);
}
