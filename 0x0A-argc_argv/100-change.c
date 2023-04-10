#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum coins.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int tab[] = {25, 10, 5, 2, 1};
	int i = 0, count = 0;
	int sum = atoi(argv[1]);

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (sum < 0)
		{
			printf("0\n");
		}
		else
		{
			while (sum > 0)
			{
				if (sum >= tab[i])
				{
					sum = sum - tab[i];
					count++;
					continue;
				}
				i++;
			}
			printf("%d\n", count);
		}
		return (0);
	}
}
