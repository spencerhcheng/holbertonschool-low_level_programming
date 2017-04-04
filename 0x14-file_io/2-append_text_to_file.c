#include "holberton.h"

/**
 * append_text_to_file - function that appends
 * text to the end of  a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wd, count;

	if (filename == NULL)
		return (-1);

	else
	{
		fd = open(filename, O_CREAT | O_RDWR | O_APPEND, 0600);

		if (fd == -1)
			return (-1);
	}

	for (count = 0; text_content[count]; count++)
		;

	if (text_content != NULL)
		wd = write(fd, text_content, count);

	if (text_content == NULL)
		wd = write(fd, '\0', count);

	close(fd);

	if (wd == -1)
		return (-1);

	return (1);
}
