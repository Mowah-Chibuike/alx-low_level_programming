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
	char *str = s;

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
	int count;
	
	count = len;
	while (count >= 0)
	{
		char character;

		character = *(str + count);
		*(s + (len - count)) = character
	}
	_putchar('\n');
}
