#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 *
 * Description - print_alphabet function is to print alphabet x10,
 * from a to z. char can be incremented.
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i = 0;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
