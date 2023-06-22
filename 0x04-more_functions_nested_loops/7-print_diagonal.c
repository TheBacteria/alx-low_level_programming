#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 *
 * @n: takes input
 *
 * Return: Always 0
*/
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			if (i < n)
				_putchar(' ');
			else
				_putchar('\\');
		}
	}
	_putchar('\n');
}
