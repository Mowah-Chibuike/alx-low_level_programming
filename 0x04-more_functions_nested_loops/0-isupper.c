
/**
 * main - checks if a character is uppercase
 * @c: character to be checked
 *
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */

int main(int c)
{
	if (((c + '0') >= 'A') && ((c + '0') <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
