#include "main.h"
/**
 * main - Entry point
 *
 * Description: printing the alphabets 10 times
*/
void print_alphabets_10x(void)
{
	int x, az;

	for (x = 0; x <= 9; x++)
	{
		for (az = 'a'; az <= 'z'; az++)
			_putchar(az);
		_putchar('\n');
	}
}
