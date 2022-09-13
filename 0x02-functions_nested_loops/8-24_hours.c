#include "main.h"

/**
 * jack_bauer - prints minutes from 00:00 to 23:59
 *
 *
 * Return: 0 (Success)
 */

void jack_bauer(void)
{
	int n = 0;
	int tenth = 0;

	while (n < 2400)
	{
		tenth = (n / 10) % 10;
		if (tenth < 6)
		{
			_putchar((n / 1000) % 10 + '0');
			_putchar((n / 100) % 10 + '0');
			_putchar(':');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
		}
		n++;
	}
	return;
}
