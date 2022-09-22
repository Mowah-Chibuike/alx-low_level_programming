#include "main.h"
#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		if (src[j] == '\0')
		{
			break;
		}
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
