#include "main.h"

/**
 * create_file - Creates a file
 *
 * @filename: pointer
 *
 * @text_content: pointer to a string
 *
 * Return: if the function fails  -1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, pes = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (pes = 0; text_content[pes];)
			pes++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, pes);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
