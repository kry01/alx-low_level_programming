#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n:  the number of integers passed to the function.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i == n - 1)
			break;
		if (separator != 0)
			printf("%s", separator);
	}
	printf("\n");
}
