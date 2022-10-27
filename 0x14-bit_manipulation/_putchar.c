#include "main.h"
#include <unistd.h>

/**
 * _putcahr - prints a character to the stsndard output
 * @c: character to be printed
 *
 * Return: number of characters printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
