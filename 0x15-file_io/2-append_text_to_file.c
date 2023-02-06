#include "main.h"

/**
 * append_text_to_file - Function to append text to end of a file
 * @filename: pointer to name of file
 * @text_content: content to be appended to end of a file
 * Return: 1 if successfull, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
