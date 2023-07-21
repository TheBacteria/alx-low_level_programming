#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings with separator
 *
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the string to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list			args;
	unsigned int	i;
	const char		*str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i)
			printf("%s", separator);
		str = va_arg(args, const char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
	}
	va_end(args);
	printf("\n");
}
