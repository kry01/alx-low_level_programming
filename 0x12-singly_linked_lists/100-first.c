#include <stdio.h>

/**
 * bfmain - before main prints.
 * Return : no return.
 */

void __attribute__ ((__constructor__)) bfmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
