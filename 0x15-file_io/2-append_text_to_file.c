#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file name.
 * @text_content: content text.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, w;

	if (filename == 0)
		return (-1);

	o = open(filename, O_EXCL | O_RDWR | O_APPEND);

	if (text_content == 0)
	{
		if (o != -1)
			return (1);
		else
			return (-1);
	}
	w = write(o, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
