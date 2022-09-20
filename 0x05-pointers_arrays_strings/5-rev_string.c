#include "main.h"
#include <stdlib.h>

/**
 * get_length - calculates teh length of a string
 * @s: the string to be checked
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
			break;
		}
		len++;
	}
	return (len);
}

/**
 * rev_string - prints the reverse of a string
 * @s: string to be printed
 *
 *
 * Return: void;
 */

void rev_string(char *s)
{
	int len = get_length(s);
	char *p = s;
	char *str = malloc(sizeof(char) * len);
	int i, b = 0;

	for (i = 0; s[i] != '\0'; i++)
		str[i] = s[i];
	str[i] = '\0';

	while (i >= 0)
	{
		*(p + (i - 1)) = str[b];
		i--;
		b++;
	}
}
