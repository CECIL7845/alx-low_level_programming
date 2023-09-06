#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *bbb;
	int m, n = 0;

	if (str == NULL)
		return (NULL);
	m = 0;
	while (str[m] != '\0')
		m++;

	bbb = malloc(sizeof(char) * (m + 1));

	if (bbb == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		bbb[n] = str[n];

	return (bbb);
}
