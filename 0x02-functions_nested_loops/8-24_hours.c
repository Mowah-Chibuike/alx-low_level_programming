#include "main.h"

/**
 * jack_bauer - prints evry minute of the day
 *
 *
 * Return: every minute of the day starting from
 * 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes;

	while (hours <= 23)
	{
		minutes = 0;
		while (minutes <= 59)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}
