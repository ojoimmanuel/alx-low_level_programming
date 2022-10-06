#include <stdio.h>

/**
 * main - prints number of arg passed
 * @argc: number of arguments
 * @argv: array of arg
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
