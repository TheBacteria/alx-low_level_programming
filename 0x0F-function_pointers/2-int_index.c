#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 *
 * @array: an array
 * @size: number of elements
 * @cmp: pointer to the function to be used to compare the values
 *
 * Description: This function searches for an integer in the 'array'
 * by applying the 'cmp' function to each element. The 'cmp' function
 * should return 0 if the element does not match the desired value
 * and a non-zero value if it matches. If the 'array' or 'cmp' is NULL,
 * or if the 'size' is less than or equal to 0, the function returns -1.
 * Otherwise, it iterates through the 'array', applies the 'cmp' function
 * to each element, and returns the index of the first element
 * for which 'cmp' does not return 0.
 *
 * Return: index of the first element
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
