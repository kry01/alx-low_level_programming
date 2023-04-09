#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments followed by a new line..
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
