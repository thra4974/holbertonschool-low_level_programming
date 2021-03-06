#include "holberton.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: pointer name of file
 * @text_content: pointer null term string to add to EOF;
 * Return: 1 upin success or -1 upon failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedesc;
	int cl;
	size_t len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	filedesc = open(filename, O_APPEND | O_RDWR);
	if (filedesc == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len] != '\0')
		len++;
	wr = write(filedesc, text_content, len);
	if (wr == -1)
		return (-1);
	cl = close(filedesc);
	if (cl == -1)
		return (-1);
	close(filedesc);
	return (1);
}
