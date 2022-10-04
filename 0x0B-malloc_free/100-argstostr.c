#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: number of arguments
 * @av: arguments of the program
 *
 * Return: pointer to concatenated string, otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, l = 0, sum = 0;
	char *str, *b;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		b = av[i];
		for (j = 0; b[j] != '\0'; j++)
			sum++;
	}

	str = (char *)malloc(sizeof(char) * (sum + ac + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		b = av[i];
		for (j = 0; b[j] != '\0'; j++)
		{
			str[l] = b[j];
			l++;
		}
		str[l] = '\n';
		l++;
	}
	str[l] = '\0';
	return (str);
}
