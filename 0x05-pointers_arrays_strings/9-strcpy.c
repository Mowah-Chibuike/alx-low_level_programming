#include <stdlib.h>

/**
 * _strcpy - copies a string
 * @desc: the buffer that the string will be copied into
 * @src: the buffer that contains the string to be copied
 *
 * Description: copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * Return: the pointer to desc
 */

char *_strcpy(char *desc, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		desc[i] = src[i];
	}
	desc[i] = '\0';
	return (&desc);
}
