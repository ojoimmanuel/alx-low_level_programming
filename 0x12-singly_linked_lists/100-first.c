#include "lists.h"

void __attribute__((constructor)) primary(void);

/**
 * primary - fxn to print text before main function
 *
 * Return: void
 */

void primary(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon ");
	printf("my back!\n");
}
