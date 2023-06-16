#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints alphabets from z to a
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	ptutchar('\n');
	return (0);
}
