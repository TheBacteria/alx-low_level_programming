#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * 
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 * 
 * Return: 1 if true, 0 if false
*/

int _strcmp(char *s1, char *s2)
{
	int sum = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			sum = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (sum);
}
