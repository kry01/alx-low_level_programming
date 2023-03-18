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
	int i, j, z, x;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '8'; j++)
		{
			for (z = i; z <= '9'; z++)
			{
				for (x = 1 + j; x <= '9'; x++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(z);
					putchar(x);
					if (i == '9' && j == '8' && z == '9' && x == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

