#include "main.h"

/**
 * main - prints alphabets
 *
 *Description:function to print alphabet
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
	_putchar('\n');
}
