#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of multiples of 3 and 5 less than 1024
 *
 *
 * Return: nothing
 */
int main(void)
{
	int i = 0;
	int res = 0;

	while (i < 1024)
	{
		if (((i % 3) == 0) || ((i % 5)) == 0)
		{
			res += i;
		}
		i++;
	}
	printf("%d\n", res);
	return (0);
}
