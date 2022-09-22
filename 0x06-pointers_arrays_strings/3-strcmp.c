#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 *
 * Return: the difference between the ascii values pf the first non-equal
 * characters in the stringd
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, res;

	while (i >= 0)
	{
		res = s1[i] - s2[i];
		if (res != 0)
		{
			break;
		}
		if ((s1[i] == '\0') || (s2[i] == '\0'))
		{
			break;
		}
		i++;
	}
	return (res);
}
