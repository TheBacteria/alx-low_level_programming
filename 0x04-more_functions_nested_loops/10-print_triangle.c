#include "main.h"
/**
 * print_triangle - entry point
 *
 * Description: prints a triangle
 *
 * @size: takes input of the size
*/
void print_triangle(int size)
{
	int x, y, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (space = size - x; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
