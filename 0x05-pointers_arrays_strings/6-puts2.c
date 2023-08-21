#include "main.h"
/**
 * puts2 -  a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int n = 0;
	int a = 0;
	char *x = str;
	int m;

	while (*x != '\0')
	{
		x++;
		n++;
	}
	a = n - 1;
	for (m = 0 ; m <= a ; m++)
	{
		if (m % 2 == 0)
	{
		_putchar(str[m]);
	}
	}
	_putchar('\n');
}
