#include "main.h"

/**
 * _isalpha - checks if a character is a letter
 *
 *
 * Return: 1 if character is letter,
 * uppercase or lowercase. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
