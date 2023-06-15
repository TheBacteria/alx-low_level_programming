#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Print a text using the write function
 *
 * Return: 1 (error)
*/

int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, text, 59);
	return (1);
}
