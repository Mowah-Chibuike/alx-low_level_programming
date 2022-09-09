#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints whether n is positive or negative
 *
 * Description: This functino assigns a random number
 * to n and then prints whether n is positive or
 * negative
 * Return: The value and status of n
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
