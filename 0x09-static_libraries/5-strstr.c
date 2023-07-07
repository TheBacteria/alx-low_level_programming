#include "main.h"
/**
 * _strstr - located a substring
 *
 * @haystack: the string to be scaned
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
		return (haystack);
	}
		return (0);

}
