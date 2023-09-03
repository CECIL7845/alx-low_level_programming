#include "main.h"
/**
 * _memset - a function that fills a memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;

	for (; n > 0; count++)
	{
		s[count] = b;
		n--;
	}
	return (s);
}
