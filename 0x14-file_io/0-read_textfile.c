#include "holberton.h"

/**
 * read_textfile - a function that reads
 * a text file and prints it to the POSIX
 * standard output
 * @filename: pointer to file
 * @letters: number of letters to read and print
 * Return: num letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descript;
	char *buff;
	ssize_t i, read_result, write_result, num_letters, close_result;

	if (filename == NULL)
		return (0);

	file_descript = open(filename, O_CREAT | O_RDONLY);

	if (file_descript == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));

	read_result = read(file_descript, buff, letters);

	if (read_result == -1)
		return (0);

	close_result = close(file_descript);

	if (close_result == -1)
		return (0);

	write_result = write(STDOUT_FILENO, buff, read_result);

	if (write_result == -1)
		return (0);

	for (num_letters = 0; buff[num_letters] != '\0'; num_letters++)
		;

	return (num_letters);
}
