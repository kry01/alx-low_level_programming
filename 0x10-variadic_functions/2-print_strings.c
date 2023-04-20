#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: the string to be printed between strings.
 * @n:  the number of strings passed to the function.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *x;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, char *);
		if (x != 0)
			printf("%s", x);
		else
			printf("(nil)");
		if (i == n - 1)
			break;
		if (separator != 0)
			printf("%s", separator);
	}
	printf("\n");
}
