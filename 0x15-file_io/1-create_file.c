#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file name.
 * @text_content: content as text.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t o, w;

	if (filename == 0)
		return (0);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
		return (-1);
	if (text_content != 0)
		w = write(o, text_content, strlen(text_content));
	else
		w = write(o, text_content, 0);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
