#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to be changed
 *
 * Return: the pointer to the changed string
 */
char *cap_string(char *s)
{
	char specials[] = " \t\n,;.!?\"(){}";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && ((s[i] >= 'a') && (s[i] <= 'z')))
		{
			s[i] -= 32;
		}
		for (j = 0; specials[j] != '\0'; j++)
		{
			if (s[i] == specials[j])
			{
				if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
				{
					s[i + 1] -= 32;
				}
				break;
			}
		}
	}
	return (s);
}
