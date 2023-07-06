#include "main.h"

/**
 * _the_helper_sqrt_recursion - Helper function.
 *
 * @n: The number to find the square root for.
 * @i: current value to check for the square root.
 *
 * Return: The square root of 'n' if it exists, otherwise -1.
*/
int _the_helper_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_the_helper_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 *
 * @n: The number to find the square root for.
 *
 * Return: The square root of 'n' if it exists, otherwise -1.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_the_helper_sqrt_recursion(n, 0));
}
