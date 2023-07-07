#include "main.h"

/**
 * _isdigit - checks if c is a number
 *
 * @c: takes input
 *
 * Return: 1 if it's a number, otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
