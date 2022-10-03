#include "main.h"

/**
 * str_concat - concatenated two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer  to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated
 * Otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l, m = 0;
	char *str;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}

	k = i + j + 1;
	str = (char *)malloc(sizeof(char) * k);

	if (str == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
	{
		str[l] = s1[l];
	}

	while (l < k)
	{
		str[l] = s2[m];
		l++;
		m++;
	}

	str[l] = '\0';
	return (str);
}
