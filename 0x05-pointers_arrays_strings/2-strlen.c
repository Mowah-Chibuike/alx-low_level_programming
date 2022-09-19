#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 *
 * Return: the length of s
 */

int _strlen(char *s)
{
	int len;

	len = 0;
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
