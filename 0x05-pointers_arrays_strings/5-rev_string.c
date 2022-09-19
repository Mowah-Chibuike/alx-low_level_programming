#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints the reverse of a string
 * @s: string to be printed
 *
 *
 * Return: void;
 */

void rev_string(char *s)
{
	int len = sizeof(s);
	char *p = &s;
	int i = 0;

	printf("%s\n", *p);
	/*while (i <= len)
	{
		*(p + i) = *(s + i);
		i++;
	}
	while (len > 0)
	{
		*(s + (sizeof(s) - len)) = p[len];
		len--;
	}
	_putchar('\n');*/
}
