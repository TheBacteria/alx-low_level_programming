#include "main.h"
/**
 * *malloc_checked - allocates memory
 *
 * @b: memory size
 *
 * Return: pointer to the memory reserved or NULL
*/
void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (!a)
		exit(98);

	return (a);
}
