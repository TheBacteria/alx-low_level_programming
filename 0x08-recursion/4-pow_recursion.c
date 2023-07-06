#include "main.h"
/**
 * _pow_recursion - calculates the power
 *
 * @x: the number
 * @y: the power
 *
 * Return: the result of x raised by the power of y
*/
int _pow_recursion(int x, int y)
{
	int i, r;

	r = x;

	if (y < 0)
		return (-1);
	for (i = 0; i <= y; i++)
		r *= x;
	return (r);
}
