#include "main.h"
/**
 * _strpbrk - locates a string in a set of bytes
 *
 * @s: the string to scan
 * @accept: the string to search for
 *
 * Return: pointer to "s" of the bytes in "accept"
 * or "NULL" if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
