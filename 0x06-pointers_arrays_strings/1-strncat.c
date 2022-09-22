#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: destination string
 * @src: aource string
 * @n: maximum number of bytes to be concatenated from src
 *
 *
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
		{
			break;
		}
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
