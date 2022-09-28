#include "main.h"

/**
 * _strlen - function returns the length of a string
 * @s: string to be checked
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen(s + 1));
}

/**
 * palindrome_check - function checks if a string is a palindome
 * @i: first index
 * @j: second index
 * @p: string to be checked
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int palindrome_check(int i, int j, char *p)
{
	if (i >= j)
	{
		return (1);
	}
	if (p[j] != p[i])
	{
		return (0);
	}

	return (palindrome_check(i + 1, j - 1, p);
}

/**
 * is_palindrome - calls palindome_check
 * @s: string to be checked
 *
 * Return: 1 if a string is a palindome and 0 if not.
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen(s) - 1;
	return (palindrome_check(0, l, s);
}
