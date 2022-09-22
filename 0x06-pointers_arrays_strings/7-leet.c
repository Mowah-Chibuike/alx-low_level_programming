#include "main.h"

/**
 * leet - encodes a string into 1337 format
 * @s: string to be checked
 *
 * Description: A and a are converted to 4, E and e are converted to 3
 * o and O are converted to 0, T and t are converted to 7, l and L are
 * converted to 1
 * Return: the pointer to the string
 */
char *leet(char *s)
{
	int i, j;
	char alpha[] = "AaEeOoTtLl";
	char sym[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = sym[j];
				break;
			}
		}
	}
	return (s);
}
