#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - write numbers to 98
 * @n: number
 **/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; n <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; n >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
}
