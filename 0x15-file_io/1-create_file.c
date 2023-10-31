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
	ssize_t bytes;
	int len = 0;

	if (!filename)
		return (0);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (0);

	while (text_content[len] != '\0')
		len++;

	bytes = 0;
	if (len)
		bytes = write(file, text_content, len);

	close(file);
	return (1);
}
