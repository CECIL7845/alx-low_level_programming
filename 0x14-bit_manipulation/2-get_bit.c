#include "main.h"

/**
 * get_bit - a function that returns the
 * value of a bit at a given index
 * @n: the number to search
 * @index: the index of the bit
 *
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
