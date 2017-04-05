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

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (count = 0; text_content[count] != '\0'; count++)
		;

	wd = write(fd, text_content, count);

	if (wd == -1)
		return (-1);

	close(fd);

	return (1);
}
