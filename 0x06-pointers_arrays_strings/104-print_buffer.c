#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, m, n;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		m = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (n = 0; n < 10; n++)
		{
			if (n < m)
				printf("%02x", *(b + x + n));
			else
				printf("  ");
			if (n % 2)
			{
				printf(" ");
			}
		}
		for (n = 0; n < m; n++)
		{
			int c = *(b + x + n);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}
