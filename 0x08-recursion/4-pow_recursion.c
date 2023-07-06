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
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
