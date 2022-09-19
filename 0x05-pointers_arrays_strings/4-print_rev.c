#include "main.h"

/**
 * print_rev - prints a string,in reverse, followed by a new line
 * @s: string to be printed
 *
 *
 * Return: void;
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (len >= 0)
	{
		char character;

		character = *(s + len);
		if (character == '\0')
		{
			break;
		}
		else
		{
			len++;
		}
	}
	while (len >= 0)
	{
		char character;

		character = *(s + len);
		_putchar(character);
		len--;
	}
	_putchar('\n');
}
