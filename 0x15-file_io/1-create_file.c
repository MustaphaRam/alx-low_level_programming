#include "main.h"

/**
 * create_file - Creates a file.
 * @fname: A pointer to the name of the file to create.
 * @text: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *fname, char *text)
{
	int fd, w, len = 0;

	if (fname == NULL)
		return (-1);

	if (text != NULL)
	{
		for (len = 0; text[len];)
			len++;
	}

	fd = open(fname, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

