#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: counter.
 * @argv: the arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *o;
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	o = argv[2];
	if (get_op_func(o) == 0 || o[1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*o == '/' || *o == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(o)(num1, num2);
	printf("%d\n", res);
	return (0);
}
