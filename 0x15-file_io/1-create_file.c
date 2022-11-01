#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: content to be inserted in file
 *
 * Description: The created file must have those permissions: rw-------. If the
 * file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * Return: 1 on success, -1 on failure (file can not be created, file can not
 * be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	ssize_t n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		n = write(fd, text_content, len);
	}
	if (n == -1 || n < (ssize_t)len)
		return (-1);
	close(fd);
	return (1);
}
