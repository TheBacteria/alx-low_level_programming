#include "main.h"
/**
 * _strchr - locates a char in a string
 *
 * @s: pointer to the string
 * @c: char to find
 *
 * Return: pointer to "c" in the string
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
