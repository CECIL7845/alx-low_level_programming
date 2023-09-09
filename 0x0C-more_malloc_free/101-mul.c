#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - a function that checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - a function that returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a function that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *a1, *a2;
	int x1, x2, x, y, c, d1, d2, *result, b = 0;

	a1 = argv[1], a2 = argv[2];
	if (argc != 3 || !is_digit(a1) || !is_digit(a2))
		errors();
	x1 = _strlen(a1);
	x2 = _strlen(a2);
	x = x1 + x2 + 1;
	result = malloc(sizeof(int) * x);
	if (!result)
		return (1);
	for (y = 0; y <= x1 + x2; y++)
		result[y] = 0;
	for (x1 = x1 - 1; x1 >= 0; x1--)
	{
		d1 = a1[x1] - '0';
		c = 0;
		for (x2 = _strlen(a2) - 1; x2 >= 0; x2--)
		{
			d2 = a2[x2] - '0';
			c += result[x1 + x2 + 1] + (d1 * d2);
			result[x1 + x2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[x1 + x2 + 1] += c;
	}
	for (y = 0; y < x - 1; y++)
	{
		if (result[y])
			b = 1;
		if (b)
			_putchar(result[y] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
