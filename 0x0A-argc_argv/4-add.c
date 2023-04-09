#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prints the multip of two numbers followed by a new line..
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != 0; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
