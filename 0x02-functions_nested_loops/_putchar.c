#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: character or characters to be printed
 *
 * Return: 1 if successful otherwise 0
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
