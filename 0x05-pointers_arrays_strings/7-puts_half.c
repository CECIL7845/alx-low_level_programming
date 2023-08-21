#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * followed by a new line
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int c, m, length;

	length = 0;

	for (c = 0; str[c] != '\0'; c++)
		length++;

	m = (length / 2);

	if ((length % 2) == 1)
		m = ((length + 1) / 2);

	for (c = m; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}
