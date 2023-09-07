#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that  concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int x1, x2, xout, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x1 = 0; s1[x1] != '\0'; x1++)
		;

	for (x2 = 0; s2[x2] != '\0'; x2++)
		;

	if (n > x2)
		n = x2;

	xout = x1 + n;

	sout = malloc(xout + 1);

	if (sout == NULL)
		return (NULL);

	for (a = 0; a < xout; a++)
		if (a < x1)
			sout[a] = s1[a];
		else
			sout[a] = s2[a - x1];

	sout[a] = '\0';

	return (sout);
}
