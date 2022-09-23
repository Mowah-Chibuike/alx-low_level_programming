#include "main.h"

/**
 * rot13 - encodes a string using rot13 format
 * @s: string to be encoded
 *
 * Return: pointer to the string
 */
char *rot13(char *s)
{
	int i, m;
	char alpha1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; alpha1[m] != '\0'; m++)
		{
			if (s[i] == alpha1[m])
			{
				s[i] = alpha2[m];
				break;
			}
		}
	}
	return (s);
}
