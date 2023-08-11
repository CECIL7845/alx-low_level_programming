#include <stdio.h>
/**
 * main - A program that prints numbers from 0 to 9.
 *
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
