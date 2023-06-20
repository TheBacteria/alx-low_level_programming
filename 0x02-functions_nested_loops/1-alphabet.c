#include "main"
/**
 *main - Entry point
 *
 * Description: printing the alphabets using _putchar
*/

void print_alphabets(void)
{
	int az;

	for (az = 'a'; az <= 'z'; az++)
		_putchar(az);
	_putchar('\n');
}
