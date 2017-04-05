#include "holberton.h"
/**
 * main - program that copies the content
 * of a file to another
 * @argc: number of arguments
 * @argv: args passed to func
 * Return: 0 on success)
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, write_to, close_from, close_to, fd_read;
	char buff[1204];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from %s\n", argv[1]), exit(97);

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		argv[1]), exit(98);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (fd_read)
	{
		fd_read = read(fd_from, buff, sizeof(buff));

		if (fd_read == -1)
			dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]), exit(98);
		if (fd_read > 0)
		{
			write_to = write(fd_to, buff, fd_read);
			if (write_to == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}

	close_from = close(fd_from);
	if (close_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	close_to = close(fd_to);
	if (close_to ==  -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
