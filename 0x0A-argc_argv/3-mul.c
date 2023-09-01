#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, len, d, i;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	i = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			i = s[a] - '0';
			if (b % 2)
				i = -i;
			c = c * 10 + i;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int product, x1, x2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x1 = _atoi(argv[1]);
	x2 = _atoi(argv[2]);
	product = x1 * x2;

	printf("%d\n", product);

	return (0);
}
