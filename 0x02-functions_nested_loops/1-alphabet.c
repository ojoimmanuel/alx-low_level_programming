#include "main.h"

/**
 * print_alphabet - prints alphabets
 *
 * Description - print_alphabet function is to print alphabet,
 * from a to z. char can be incremented.
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
