#include <stdlib.h>
#include "main.h"

/**
 * count_word - a function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int string, m, n;

	string = 0;
	n = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == ' ')
			string = 0;
		else if (string == 0)
		{
			string = 1;
			n++;
		}
	}

	return (n);
}
/**
 * **strtow - a function that splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int a, b = 0, x = 0, words, y = 0, begin, end;

	while (*(str + x))
		x++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (a = 0; a <= x; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (y)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (y + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < end)
					*tmp++ = str[begin++];
				*tmp = '\0';
				mat[b] = tmp - y;
				b++;
				y = 0;
			}
		}
		else if (y++ == 0)
			begin = a;
	}

	mat[b] = NULL;

	return (mat);
}
