#include "main.h"
/**
 * array_range - creates an array of integers
 *
 * @min: included
 * @max: included
 *
 * Return: integer value
*/
int *array_range(int min, int max)
{
	int *m, i = 0;

	if (min > max)
		return (NULL);
	m = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (m == NULL)
		return (NULL);

	while (min <= max)
	{
		m[i] = min;
		i++;
		min++;
	}

	return (m);
}
