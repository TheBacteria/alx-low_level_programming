#include "main.h"
/**
 * _memcpy - copies "n" bytes of memory from "src" to "dest"
 *
 * @dest: memory area
 * @src: source to copy from
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
