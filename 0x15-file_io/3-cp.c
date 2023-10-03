#include "main.h"
#include <stdio.h>

/**
 * error_file - a function that checks checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: an arguments vector.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - a function thatcheck the code for ALX students.
 * @argc: a number of arguments.
 * @argv: an arguments vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, e_close;
	ssize_t c, n;
	char puf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	c = 1024;
	while (c == 1024)
	{
		c = read(file_from, puf, 1024);
		if (c == -1)
			error_file(-1, 0, argv);
		n = write(file_to, puf, c);
		if (n == -1)
			error_file(0, -1, argv);
	}

	e_close = close(file_from);
	if (e_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	e_close = close(file_to);
	if (e_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
