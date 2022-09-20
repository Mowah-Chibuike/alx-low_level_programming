#include "main.h"
#include <stdio.h>

/**
 * get_length - gets the length of a string
 * @s: string to be checked
 *
 *
 * Return: the length of s
 */

int get_length(char *s)
{
	int len = 0;

	while (len >= 0)
	{
		if (*(s + len) == '\0')
		{
			len--;
			break;
		}
		len++;
	}
	return (len);
}

/**
 * puts2 - prints every other character in a string
 * followed by a new line.
 * @s: the string to be iterated over
 *
 *
 * Return: void
 */

void puts2(char *s)
{
	int len = get_length(s);
	int i = 0;

	while (i <= len)
	{
		char character;

		character = *(s + i);
		_putchar(character);
		i += 2;
	}
	_putchar('\n');
}
