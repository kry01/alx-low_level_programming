#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program is to know what is the sign of n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = 1 + i; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

