#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * f3 - fourth function
 * @str: the username
 * @len: length of the username
 *
 * Return: the position of the third character of the password in the array of
 * characters
 */
int f3(char *str, int len)
{
	int i, res = 1;

	for (i = 0; i < len; i++)
		res *= str[i];
	res = (res ^ 0x55) & 0x3f;
	return (res);
}

/**
 * f4 - fourth function
 * @str: the username
 * @len: length of the username
 *
 * Return: the position of the fourth character of the password in the array of
 * characters
 */
int f4(char *str, int len)
{
	int i, check;

	check = str[0];
	for (i = 0; i < len; i++)
	{
		if (str[i] > check)
			check = str[i];
	}
	check = check ^ 0xe;
	srand(check);
	check = rand() & 0x3f;
	return (check);
}

/**
 * f5 - fifth function
 * @str: the username
 * @len: length of the username
 *
 * Return: the position of the fifth character of the password in the array of
 * characters
 */
int f5(char *str, int len)
{
	int i, res = 0;

	for (i = 0; i < len; i++)
		res += str[i] * str[i];
	res = (res ^ 0xef) & 0x3f;
	return (res);
}

/**
 * f6 - sixth function
 * @c: first letter of the username
 *
 * Return: the position of the sixth xharacter of the password in the array of
 * characters
 */
int f6(char c)
{
	int i, res;

	i = res = 0;
	while (c > i)
	{
		res = rand();
		i++;
	}
	res = (res ^ 0xe5) & 0x3f;
	return (res);
}

/**
 * main - creates a password for a user
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, x, len;
	char p[8][9] = {
		"A-CHRDw8",
		"7lNS0E9B",
		"2TibgpnM",
		"Vys5Xzvt",
		"OGJcYLU+",
		"4mjW6fxq",
		"ZeF3Qa1r",
		"PhdKIouk",
	};

	if (argc != 2)
	{
		printf("Usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	x = (len ^ 59) & 63;
	printf("%c", p[x / 8][x % 8]);
	x = 0;
	for (i = 0; i < len; i++)
		x += argv[1][i];
	x = (x ^ 0x4f) & 0x3f;
	printf("%c", p[x / 8][x % 8]);
	x = f3(argv[1], len);
	printf("%c", p[x / 8][x % 8]);
	x = f4(argv[1], len);
	printf("%c", p[x / 8][x % 8]);
	x = f5(argv[1], len);
	printf("%c", p[x / 8][x % 8]);
	x = f6(argv[1][0]);
	printf("%c", p[x / 8][x % 8]);
	return (0);
}
