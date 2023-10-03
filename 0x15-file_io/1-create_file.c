#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: a filename.
 * @text_content: a content write in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int ld;
	int lett;
	int r;

	if (!filename)
		return (-1);

	ld = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ld == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (lett = 0; text_content[lett]; lett++)
		;

	r = write(ld, text_content, lett);

	if (r == -1)
		return (-1);

	close(ld);

	return (1);
}
