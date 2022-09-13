#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * 
 *
 * Return: 0 (Success)
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		return (last_digit * -1);
	else
		return (last_digit);
	_putchar('\n');
}
