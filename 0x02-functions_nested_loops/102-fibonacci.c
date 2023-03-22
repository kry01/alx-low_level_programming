#include<stdio.h>
/**
 * main - the principal function
 * Return: 0
 */
int main(void)
{
	int sum, count = 0,var1 = 1, var2 = 2;

	while (count < 50)
	{
		sum = var1 + var2;
		printf("%d, ", sum);
		var1 = var2;
		var2 = sum;
		count++;
	}
	return (0);
}
