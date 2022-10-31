#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output.
 * @filename: textfile to be read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t print;
	size_t written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	buff = (char *)malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	print = read(fd, buff, letters);
	written = (size_t)write(1, buff, letters);
	if (written < letters)
		return (0);
	close(fd);
	return (print);
}
