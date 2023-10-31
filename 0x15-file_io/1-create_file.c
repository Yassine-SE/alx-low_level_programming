#include "main.h"

/**
 * create_file - function
 * @filename: param
 * @text_content: param
 *
 * Return: 0 success
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes = 0;
	int len = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (!file)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	if (len)
		bytes = write(file, text_content, len);

	close(file);
	if (bytes == len)
		return (1);
	else
		return (-1);

	return (1);
}
