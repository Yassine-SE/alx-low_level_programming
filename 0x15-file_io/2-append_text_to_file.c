#include "main.h"

/**
 * append_text_to_file - function
 * @filename: param
 * @text_content: param
 *
 * Return: 0 success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes;
	int len = 0;

	if (!filename)
		return (0);

	file = open(filename, O_WRONLY | O_APPEND);
	if (!file)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	bytes = 0;
	if (len)
		bytes = write(file, text_content, len);

	close(file);
	if (bytes == -1)
		return (-1);
	else
		return (1);
}
