#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int m;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (m = longi; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
