#include "main.h"
/**
 * _memset - Fills a memory block pointed to by 's' with the byte value of 'b'
 * until the specified length 'n' is done.
 *
 * @s: Pointer to the memory block to be filled
 * @b: Byte value to fill the memory block with
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the modified memory block
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}
