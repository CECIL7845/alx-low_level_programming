#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: a text file being read
 * @letters: a number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *puf;
	ssize_t ld;
	ssize_t b;
	ssize_t a;

	ld = open(filename, O_RDONLY);
	if (ld == -1)
		return (0);
	puf = malloc(sizeof(char) * letters);
	a = read(ld, puf, letters);
	b = write(STDOUT_FILENO, puf, a);

	free(puf);
	close(ld);
	return (b);
}
