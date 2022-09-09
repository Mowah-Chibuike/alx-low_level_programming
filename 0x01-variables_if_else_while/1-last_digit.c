#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number
 *
 * Description: This prints the last digit of the
 * number stored in the variable n which is a
 * random number evrytime the function is run
 * Return: This returns 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf(
			"Last digit of %d is %d and is less than 6 and not 0\n"
			, n
			, lastDigit
		);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	return (0);
}
