#include "main.h"

/**
 * _atoi - Converts a string to an integer
 *
 * @s: The string to convert
 *
 * Return: The converted integer
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int res = 0;
	int b = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			res = res * 10 + (*s - '0');
			b = 1;
		}
		else if (b)
		{
			break;
		}
		s++;
	}
	return (res * sign);
}
