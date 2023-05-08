#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @fname: A pointer to the name of the file.
 * @text: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *fname, char *text)
{
	int o, w, len = 0;

	if (fname == NULL)
		return (-1);

	if (text != NULL)
	{
		for (len = 0; text[len];)
			len++;
	}

	o = open(fname, O_WRONLY | O_APPEND);
	w = write(o, text, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
