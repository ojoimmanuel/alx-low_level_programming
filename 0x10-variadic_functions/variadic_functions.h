#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct op - struct op
 *
 * @c: The char data type
 * @f: The function tied to it
 */

typedef struct op
{
	char c;
	void (*f)(va_list);
} op_t;

void print_all(const char * const format, ...);
#endif
