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
	while (n< 2400)
	{
		putchar(n/1000 + '0');
		putchar(n/100 + '0');
		putchar(':');
		putchar(n/10 + '0');
		putchar(n%10 + '0');
		putchar('\n');
		n++;
	}
	return (0);
}
