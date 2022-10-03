#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: a pointer to the duplicated string and NULL otherwise
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (*str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	s = (char *)malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}

	s[j] = '\0';
	return (s);
}
