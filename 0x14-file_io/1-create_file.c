#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wd, count;

	if (filename == NULL)
		return (-1);

	else
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

		if (fd == -1)
			return (-1);
	}

	for (count = 0; text_content[count]; count++)
		;

	wd = write(fd, text_content, count);

	close(fd);

	if (wd == -1)
		return (-1);

	return (1);
}
