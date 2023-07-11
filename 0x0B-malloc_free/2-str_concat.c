#include "main.h"
/**
 * _strlen - counts the length of a string
 *
 * @s: the string
 *
 * Return: the length
*/
int _strlen(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
	;
	return (len);
}

/**
 * *str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer
*/
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *ma;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ma = malloc((len1 + len2) * sizeof(char) +1);
	if (ma == 0)
		return (0);
	for (i = 0; i <= len1 + len2; i++)
	{
		if (i < len1)
			ma[i] = s1[i];
		else
			ma[i] = s2[i - len1];
	}
	ma[i] = '\0';
	return (ma);
}
