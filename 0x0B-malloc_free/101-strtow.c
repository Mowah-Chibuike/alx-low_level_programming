#include "main.h"
#include <stdio.h>

/**
 * getwords - calulates the number of words in a string
 * @str: string to be checked
 *
 * Return: number of words in the string
 */

int getwords(char *s)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= '!') && (s[i] <= 'z'))
		{
			for (j = 0; s[i + j] != '\0'; j++)
			{
				if (s[i + j] == '\t' || s[i + j] == ' ')
					break;
			}
			count += 1;
			i += j;
		}
	}
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
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);
	arr[words] = NULL;
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
				return NULL;
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
