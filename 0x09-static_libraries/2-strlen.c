#include "main.h"
/**
 * _strlen - counts the length
 *
 * @s: string input
 *
 * Return: length of string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
