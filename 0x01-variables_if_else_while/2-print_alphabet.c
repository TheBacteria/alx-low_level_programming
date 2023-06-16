#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char b = ' ';
	for (c = 'a' ; c <= 'z' ; ++c)
		putchar(c);
	putchar(b);
	return (0);
}
