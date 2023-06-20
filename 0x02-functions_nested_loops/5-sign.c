#include "main.h"
/**
 * print_sign - a functiion that checks if a number is positive
 * or negative or equals 0
 *
 * @n: takes the int input
 *
 * Return: if the number is positive it returns 1
 *	   if the number equals 0 it returns 0
 *	   if the number is negative it returns -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
}
