#include "main.h"
/***/
void rev_string(char *s)
{
	int a, b;

	char c;

	for (a = 0; s[l] != '\0'; ++a)
		;
	for (b = 0; b < l / 2; b++)
	{
		c = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = c;
	}
}
