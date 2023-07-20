#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - the sum of a and b
 *
 * @a: first number
 * @b: sconde number
 *
 * Return: returns the sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of a and b
 *
 * @a: first number
 * @b: sconde number
 *
 * Return: returns the difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of a and b
 * @a: first number
 * @b: sconde number
 * Return: eturns the product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  the division of a and b
 *
 * @a: first number
 * @b: sconde number
 *
 * Return: eturns the result of the division
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
 * op_mod - the remainder of the division of a and b
 *
 * @a: first number
 * @b: sconde number
 *
 * Return: returns the remainder of the division
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
