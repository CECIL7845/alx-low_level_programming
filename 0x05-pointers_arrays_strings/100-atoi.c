#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, c, m, len, b, i;

	a = 0;
	c = 0;
	m = 0;
	len = 0;
	b = 0;
	i = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && b == 0)
	{
		if (s[a] == '-')
			++c;

		if (s[a] >= '0' && s[a] <= '9')
		{
			i = s[a] - '0';
			if (c % 2)
				i = -i;
			m = m * 10 + i;
			b = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			b = 0;
		}
		a++;
	}

	if (b == 0)
		return (0);

	return (m);
}
