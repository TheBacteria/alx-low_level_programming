#include "main.h"
/**
 * *_strdup - a function that returns a pointer to a copied string
 *
 * @str: the string to copy
 *
 * Return: a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	a = malloc(size * sizeof(*str) + 1);

	if (a == 0)
		return (NULL);

	else
	{
		for (; i < size; i++)
			a[i] = str[i];
	}

	return (a);
}
