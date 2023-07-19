#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 *
 * @array: an array
 * @size: number of elements
 * @cmp: pointer to the function to be used to compare the values
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	i = -1;
	if (!array || size <= 0 || !cmp)
		return (-1);
	while (++i < (size_t)size)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
