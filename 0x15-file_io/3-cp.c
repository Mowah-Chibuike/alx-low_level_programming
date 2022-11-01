#include "main.h"
#include <stdio.h>

/**
 * copy_file - copies a file to another file
 * @from: file descriptor of the file to be copied from
 * @to: file descriptor of the file to copied to
 * @filenames: contains the names of the files to be copied from and to
 *
 * Return: void
 */
void copy_file(int from, int to, char *filenames[])
{
	char buff[1025];
	ssize_t rd = 1024, written;

	buff[1024] = '\0';
	while (rd == 1024)
	{
		rd = read(from, buff, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filenames[1]);
			exit(98);
		}
		written = write(to, buff, rd);
		if (written < -1 || written < rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filenames[2]);
			exit(99);
		}
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int from, to, closed;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	copy_file(from, to, argv);
	closed = close(from);
	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	closed = close(to);
	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
