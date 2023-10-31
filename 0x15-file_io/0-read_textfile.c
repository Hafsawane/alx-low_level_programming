#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 *
 * @filename:  pointer
 *
 * @letters: The number of letters
 *
 * Return: 0 if the fuction fails
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t o, w, r;
	char *f;

	if (filename == NULL)
		return (0);

	f = malloc(sizeof(char) * letters);
	if (f == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, f, letters);
	w = write(STDOUT_FILENO, f, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(f);
		return (0);
	}

	free(f);
	close(o);

	return (w);
}
