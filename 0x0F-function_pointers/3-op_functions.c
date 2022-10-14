#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer sum
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - diff of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer diff
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - product of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer product
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - quotient of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}


/**
 * op_mod - modulus of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
