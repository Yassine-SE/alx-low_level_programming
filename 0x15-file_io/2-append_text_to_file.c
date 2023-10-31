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

	while (text_content[len] != '\0')
		len++;

	bytes = 0;
	if (len)
		bytes = write(file, text_content, len);

	close(file);
	if (bytes == len)
		return (1);
	else
		return (-1);
}