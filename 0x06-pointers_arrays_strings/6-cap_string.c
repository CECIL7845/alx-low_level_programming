#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int count = 0;

	while (str[count])
	{
		while (!(str[count] >= 'a' && str[count] <= 'z'))
			count++;

		if (str[count - 1] == ' ' ||
		    str[count - 1] == '\t' ||
		    str[count - 1] == '\n' ||
		    str[count - 1] == ',' ||
		    str[count - 1] == ';' ||
		    str[count - 1] == '.' ||
		    str[count - 1] == '!' ||
		    str[count - 1] == '?' ||
		    str[count - 1] == '"' ||
		    str[count - 1] == '(' ||
		    str[count - 1] == ')' ||
		    str[count - 1] == '{' ||
		    str[count - 1] == '}' ||
		    count == 0)
			str[count] -= 32;

		count++;
	}

	return (str);
}
