#include "main"
/**
 * print_numbers - prints  from 0 to 9
 *
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int c;

	do {
		_putchar(c + 48);
		c++;
	} while (c >= 0 && <= 9);
	_putchar('\n');
}
