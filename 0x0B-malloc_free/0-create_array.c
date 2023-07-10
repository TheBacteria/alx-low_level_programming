#include "main.h"
/**
 * *create_array - creates an array of chars and initializes it
 *
 * @size: array's size
 * @c: char to initialize
 *
 * Return: pointer to the initialized array or "NULL"
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (0);

	char *n = malloc(size);

	while (size--)
		n[size] = c;
	return (n);
}
