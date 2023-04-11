#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in my
 *
 * @str: string
 *
 * Return: pointer.
 */

char *_strdup(char *str)
{
	int count = 1, i;
	char *p;

	while (*(str + count) != 0)
		count++;
	p = malloc(sizeof(char) * count + 1);
	if (*str == 0 || str == NULL)
		return ('\0');
	if (p == 0)
		return ('\0');
	for (i = 0; i < count; i++)
		p[i] = str[i];
	return (p);
}
