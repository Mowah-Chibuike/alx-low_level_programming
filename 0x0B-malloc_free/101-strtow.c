#include "main.h"
#include <stdio.h>

/**
 * getwords - calulates the number of words in a string
 * @s: string to be checked
 *
 * Return: number of words in the string
 */

int getwords(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				count++;
		}
		else if (i == 0)
			count++;
	}
	count++;
	return (count);
}

/**
 * strtow -  splits a string into words.
 * @str: string to be split
 *
 * Return: pointer to array containing all the words in the string,
 * Otherwise, NULL
 */

char **strtow(char *str)
{
	int words, i, j, k, length = 0, index = 0;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = getwords(str);
	if (words == 1)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * words);
	if (arr == NULL)
		return (NULL);
	arr[words - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			arr[index] = (char *)malloc(sizeof(char) * j);
			j--;
			if (arr[index] == NULL)
			{
				for (k = 0; k < index; k++)
					free(arr[k]);
				free(arr[words]);
				free(arr);
				return (NULL);
			}
			for (length = 0; length < j; length++)
				arr[index][length] = str[i + length];
			arr[index][length] = '\0';
			index++;
			i += j;
		}
		else
			i++;
	}
	return (arr);
}
