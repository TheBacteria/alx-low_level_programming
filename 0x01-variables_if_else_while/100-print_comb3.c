#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing combinations of 2 digits
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n1 = 0;
	int n2;

	while (n1 <= 9)
	{
		putchar(n1 + '0');
		n2 = n1 + 1;
		while (n2 <= 9)
		{
			putchar(n2 + '0');
			putchar(',');
			putchar(' ');
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
