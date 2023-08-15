#include "main.h"
/**
 * main - A program that prints the alphabet,
 *  in lowercase, followed by a new line.
 *  Return: 0
 */

void print_alphabet(void);
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	_putchar('\n');
}
