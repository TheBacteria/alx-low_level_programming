#include "main"
/**
 * _isalpha - a function that checks if a character is a letter
 *
 * @c: takes input from other functions
 *
 * Return: 1 if c is a letter, otherwise return 0
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
