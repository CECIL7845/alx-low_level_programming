#include "main.h"
/**
 * string_toupper - a function that change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int count;

	count = 0;
	while (n[count] != '\0')
	{
		if (n[count] >= 'a' && n[count] <= 'z')
			n[count] = n[count] - 32;
		count++;
	}
	return (n);
}
