#include "main.h"

/**
 * _puts - prints a string, follwed by a new line
 * @str - pointer to string to be printed
 *
 *
 * Return: void
 */

void _puts(char *str)
{
	int len;

	len = 0;
	while (len >= 0)
	{
		char character;

		character = *(str + len);
		if (character == '\0')
		{	
			break;
		}
		_putchar(character);
		len++;
	}
	_putchar('\n');
}
