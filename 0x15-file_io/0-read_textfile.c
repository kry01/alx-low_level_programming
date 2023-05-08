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
	if (o == -1)
		return (0);
	r = read(o, bf, letters);
	bf[letters] = '\0';
	w = write(1, bf, r);
	free(bf);
	close(o);
	return (w);
}
