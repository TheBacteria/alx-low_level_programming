#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers with separator
 *
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the ints to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
