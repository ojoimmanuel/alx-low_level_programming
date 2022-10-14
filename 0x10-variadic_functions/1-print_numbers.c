#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @n: number of parameters
 * @separator: char separator
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d", num);
		}
		else
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d%s", num, separator);
		}
	}
	va_end(args);
}
