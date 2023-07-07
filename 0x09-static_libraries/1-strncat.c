#include "main.h"

/**
 * _strncat - concatenates two strings using at rest
 *
 * @dest: the string to be appended
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
