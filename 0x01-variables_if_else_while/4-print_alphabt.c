#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Alphabets except e and q
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}
	putchar('\n');
	return (0);
}
