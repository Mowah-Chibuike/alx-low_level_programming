#include "main.h"
#include <stdio.h>

/**
 * get_length - calculates the length of a string
 * @s: string to iterated on
 *
 *
 * Return: length of the string
 */

int get_length(char *s)
{
	int len = 0;

	while (len >= 0)
	{
		if (*(s + len) == '\0')
		{
			break;
		}
		len++;
	}
	return (len);
}

/**
 * puts_half - returns the swcond half of a string
 * @s: string to be printed
 *
 *
 * Return: void
 */

void puts_half(char *s)
{
	int len = get_length(s);
	int i;

	if ((len % 2) == 0)
	{
		i = (len / 2);
	}
	else
	{
		i = ((len - 1) / 2) + 1;
	}

	while (i < len)
	{
		char character;

		character = *(s + i);
		_putchar(character);
		i++;
	}
	_putchar('\n');
}
