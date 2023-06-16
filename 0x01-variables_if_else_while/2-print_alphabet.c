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

	for (c = 'a' ; c <= 'z' ; ++c)
		putchar(c);
	putchar(" ");
	return (0);
}
