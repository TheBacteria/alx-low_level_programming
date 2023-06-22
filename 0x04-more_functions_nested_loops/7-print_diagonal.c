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
	int space;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space <= i; space++)
				_putchar(' ');
			_putchar('\\');
			if (i != n)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
