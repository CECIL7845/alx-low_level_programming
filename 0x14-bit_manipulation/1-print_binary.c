#include "main.h"

/**
 * print_binary - a function that prints the
 * binary equivalent of a decimal number
 * @n: a number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, i = 0;
	unsigned long int current;

	for (a = 63; a >= 0; a--)
	{
		current = n >> a;

		if (current & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
			_putchar('0');
	}
	if (!i)
		_putchar('0');
}
