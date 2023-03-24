#include<stdio.h>
/**
 * main - The main function.
 *
 * Return: return 0.
 */

int main(void)
{
	long int i, num, lf;

	num = 612852475143;
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			lf = i;
			num = num / lf;
		}
	}
	printf("%lu\n", lf);
	return (0);
}
