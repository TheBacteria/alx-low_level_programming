#include "main.h"
/**
 * swap_int - swaps 2 ints
 *
 * @a: input of the first int
 * @b: input of the second int
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
