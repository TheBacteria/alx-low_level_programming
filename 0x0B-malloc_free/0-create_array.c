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
	char *n = malloc(size);

	if (size == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
