#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing base 16 chars
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char n, a;

	for (n = 0; n <= 9 ; n++)
		putchar(n + '0');
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
