#include "main.h"
/**
 * _isupper - check if c is upper or lower
 *
 * @c: takes the input
 *
 * Return: 1 if c is upper, 0 if c is lower
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
