#include<stdio.h>
/**
 * main - the principal function
 * Return: 0
 */
int main(void)
{
	int i, sum;

	for (i = 1; i <= 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
