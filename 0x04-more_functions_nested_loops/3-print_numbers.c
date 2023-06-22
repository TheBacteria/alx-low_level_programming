#include "main"
/**
 * print_numbers - prints  from 0 to 9
 *
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + 48);
	}
	_putchar('\n');
}
