#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: printing from 0 to 9 using putchar without char
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
