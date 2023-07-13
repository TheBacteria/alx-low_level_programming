#include "main.h"
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	m = malloc(l);

	if (m == NULL)
		return (NULL);

	while (i < l)
	{
		m[i] = 0;
		i++;
	}

	return (m);
}
