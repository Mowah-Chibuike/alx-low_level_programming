#include "main.h"

/**
 * rev_string - prints the reverse of a string
 * @s: string to be printed
 *
 *
 * Return: void;
 */

void rev_string(char *s)
{
	int len;

	len = 0;
	while (len >= 0)
	{
		char character;

		character = *(s + len);
		if (character == '\0')
		{
			len--;
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
