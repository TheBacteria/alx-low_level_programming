#include "variadic_function.h"
/**
 * print_numbers - a functions that prints numbers with separator
 *
 * @separator: the string separator
 * @n: number of arguments
 * @...: ints to print
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
