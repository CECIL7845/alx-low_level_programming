#include "main.h"

/**
 * binary_to_uint - a function that converts a
 * binary number to unsigned int
 * @b: a string which contains the binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int d = 0;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		d = 2 * d + (b[count] - '0');
	}

	return (d);
}
