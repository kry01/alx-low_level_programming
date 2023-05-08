#include "main.h"

/**
 * read_textfile - reads atext file and prints it to the POSIX standard output.
 * @filename: name of file.
 * @letters: number of letters.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	int o, r, w;

	if (filename == 0)
		return (0);
	bf = malloc(letters);
	if (bf == 0)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, bf, letters);
	w = write(1, bf, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(bf);
		return (0);
	}

	free(bf);
	close(o);
	return (w);
}
