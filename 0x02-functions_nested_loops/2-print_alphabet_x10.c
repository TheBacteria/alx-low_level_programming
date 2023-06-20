#include "main.h"
/**
 * print_alphabet_x10: printing the alphabets 10 times
*/
void print_alphabet_x10(void)
{
	int x, az;

	for (x = 0; x <= 9; x++)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}
