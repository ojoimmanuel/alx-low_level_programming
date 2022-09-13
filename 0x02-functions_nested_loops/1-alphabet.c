#include <stdio.h>
#include "main.h"
/**
 * main - prints alphabets
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
}
