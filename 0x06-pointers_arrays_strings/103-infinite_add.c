#include "main.h"
#include <stdlib.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the sum of the numbers
 * @size_r: size of the buffer
 *
 * Return: address of the buffer or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, m, n, p, q;
	char *s = malloc(sizeof(char) * size_r);

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	n = 0;
	for (i -= 1, j -= 1, m = 0; m < size_r - 1; i--, j--, m++)
	{
		p = n;
		if (i >= 0)
			p += n1[i] - '0';
		if (j >= 0)
			p += n2[j] - '0';
		if (i < 0 && j < 0 && p == 0)
			break;
		n = p / 10;
		s[m] = p % 10 + '0';
	}
	s[m] = '\0';

	if (i >= 0 || j >= 0 || n)
	{
		return (0);
	}
	for (m -= 1, q = 0; q < size_r - 1; m--, q++)
	{
		r[q] = s[m];
	}
	r[q] = '\0';
	return (r);
}
