#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *constr;
	unsigned int m, n, x, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		;

	for (n = 0; s2[n] != '\0'; n++)
		;

	constr = malloc(sizeof(char) * (m + n + 1));

	if (constr == NULL)
	{
		free(constr);
		return (NULL);
	}

	for (x = 0; x < m; x++)
		constr[x] = s1[x];

	limit = n;
	for (n = 0; n <= limit; x++, n++)
		constr[x] = s2[n];

	return (constr);
}
