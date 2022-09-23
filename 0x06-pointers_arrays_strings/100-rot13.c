#include "main.h"

/**
 * rot13 - encodes a string using rot13 format
 * @s: string to be encoded
 *
 * Return: pointer to the string
 */
char *rot13(char *s)
{
	int i, j, m, n;
	char alpha1[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char alpha2[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (((s[i] >= 'A') && (s[i] <= 'Z')) || ((s[i] >= 'a') && (s[i] <= 'z')))
		{
			for (m = 0; alpha1[m] != '\0'; m++)
			{
				if (s[i] == alpha1[m])
				{
					s[i] = alpha2[m];
					break;
				}
			}

			for (n = 0; alpha2[n] != '\0'; n++)
			{
				if (s[i] == alpha2[n])
				{
					s[i] = alpha1[n];
					break;
				}
			}
		}
	}
	return (s);
}
