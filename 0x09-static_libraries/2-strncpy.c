#include "main.h"

/**
 * _strncpy - copies at mst an inputed number
 *
 * @dest: The buffer storing the string copy
 * @src: the source string
 * @n: the maximum number of bytes to copied from @src
 *
 * Return: A pointer to true resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = j; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
