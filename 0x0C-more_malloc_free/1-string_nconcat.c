#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of  bytes of s2 to be concatenated to s1
 *
 * Return: pointer to newly allocated space in memory that contains s1
 * followed by n bytes of s2 and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
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

	if (j > n)
		j = n;

	k = i + j + 1;
	str = (char *)malloc(sizeof(char) * k);
	if (str == NULL)
		return (NULL);
	str[i + j] = '\0';

	for (l = 0; l < i; l++)
		str[l] = s1[l];
	for (l = 0; l < j; l++)
		str[i + l] = s2[l];

	return (str);
}
