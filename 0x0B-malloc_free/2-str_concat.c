#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: string.
 * @s2: string.
 *
 * Return: pointer.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, c1 = 0, c2 = 0;
	char *p;

	while (*(s1 + c1) != 0)
		c1++;
	while (*(s2 + c2) != 0)
		c2++;
	p = malloc(c1 + c2 + 1);
	if (p == 0)
		return (0);
	for (i = 0; *(s1 + i) != 0; i++)
		*(p + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != 0; j++, i++)
		*(p + i) = *(s2 + j);
	return (p);
}
