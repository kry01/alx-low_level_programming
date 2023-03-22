#include<stdio.h>
/**
 * main - the principal function
 * Return: 0
 */
int main(void)
{
	unsigned long int sum, var1, var2, final;

	var1 = 1;
	var2 = 2;
	final = sum = 0;
	while (sum <= 4000000)
	{
		sum = var1 + var2;
		var1 = var2;
		var2 = sum;
		if ((var1 % 2) == 0)
		final = final + var1;
	}
	printf("%ld\n", final);
	return (0);
}
