#include <stdio.h>
/**
 * main - prints the sizes of data  types
 *
 * Description - prints the storage values of some data types
 *
 * Return: prints 0 if successful
 */

int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;

	printf("Size of a char: %u byte(s)\n", sizeof(i));
	printf("Size of an int: %u byte(s)\n", sizeof(j));
	printf("Size of a long int: %u byte(s)\n", sizeof(k));
	printf("Size of a long long int: %u byte(s)\n", sizeof(l));
	printf("Size of a float: %u byte(s)\n", sizeof(m));
	return (0);
}
