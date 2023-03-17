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
	int i, j, z;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = 1 + i; j <= '8'; j++)
		{
			for (z = 1 + j; z <= '9'; z++)
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (i == '7' && j == '8' && z == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

