#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: n is a variable
 *
 *
 * Return: 0 (Success)
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 99)
	{
		while (n < 99)
		{
			if (n < 0)
			{
				_putchar('-');
				if (n < -99)
				{
					if ((n / 100) % 10 != 0)
					{
						_putchar((n / 100) % 10 + '0');
					}
					if ((n / 10) % 10 != 0)
					{
						_putchar((n / 10) % 10 + '0');
					}
				}
				 
			}
			if (n > 9 || n < -9)
			{
				_putchar((n / 10) % 10 + '0');
			}
			_putchar(n % 10 + '0');
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else
	{
		while (n > 97)
		{
			if ((n / 100) % 10 != 0)
			{
				_putchar((n / 100) % 10 + '0');
			}
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');
}
