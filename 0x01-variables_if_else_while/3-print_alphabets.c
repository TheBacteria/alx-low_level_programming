#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Double alphabets
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char c, b;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (b = 'A'; b <= 'Z'; ++b)
		putchar(b);
	putchar('\n');
	return (0);

}
