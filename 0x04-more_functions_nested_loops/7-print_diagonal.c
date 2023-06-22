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

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
