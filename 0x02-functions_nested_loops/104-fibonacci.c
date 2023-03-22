#include<stdio.h>
/**
 * main - the principal function
 * Return: 0
 */
int main(void)
{
	int count = 0;
	long double sum, var1, var2;

	var1 = 1;
	var2 = 2;
	printf("%0.Lg, %0.Lg, ", var1, var2);
	while (count < 96)
	{
		sum = var1 + var2;
		printf("%0.Lg", sum);
		if (count == 95)
			break;
		printf(", ");
		var1 = var2;
		var2 = sum;
		count++;
	}
	printf("\n");
	return (0);
}
