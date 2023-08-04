#include "main.h"

/**
 * get_bit - gets the bit at the given index
 *
 * @n: the number to index
 * @index: the bit to get
 *
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
