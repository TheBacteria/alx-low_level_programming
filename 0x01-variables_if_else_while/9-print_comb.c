#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
