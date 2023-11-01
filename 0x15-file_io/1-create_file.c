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

	if (!filename || !text_content)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes = write(file, text_content, len);

	if (!file || !bytes)
		return (-1);

	return (1);
}
