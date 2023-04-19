#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: the string name.
 * @f: call-back function.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
