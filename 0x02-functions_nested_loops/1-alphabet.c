#include "main.h"
/**
 *main - Entry point
 *
 * Description: printing the alphabets using _putchar
*/

void print_alphabet(void)
{
	int az;

	for (az = 'a'; az <= 'z'; az++)
		_putchar(az);
	_putchar('\n');
}
