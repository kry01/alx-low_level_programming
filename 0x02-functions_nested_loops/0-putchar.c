#include "_putchar.c"
#include "main.h"
/**
 * main - The main code.
 *
 * Return: On seccess O.
 * On error, walo
 */
int main(void)
{
	char ch[] = "_putchar\n";
	int i;

	for(i = 0; i < (int)sizeof(ch) - 1; i++)
		_putchar(ch[i]);
	return (0);
}
