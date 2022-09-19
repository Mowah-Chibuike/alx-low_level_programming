#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints the reverse of a string
 * @s: string to be printed
 *
 *
 * Return: void;
 */

void rev_string(char *s)
{
	int len = 0;
	int count, i;

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
	char str[len];

	for (i = 0; i < len; i++)
	{
		str[i] = s[i];
	}
	printf("%s\n", str);
	count = len;
	while (count >= 0)
	{
		char character;

		character = *(str + count);
		*(s + (len - count)) = character;
		count--;
	}
	_putchar('\n');
}
