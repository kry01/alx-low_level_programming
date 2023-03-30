#include "main.h"

/**
 * strcmp - the function .
 *
 * @s1: 1st string.
 * @s2: 2nd string.
 * Return: return value.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;
	if (i < j)
		return (-15);
	else if (i > j)
		return (15);
	else
		return (0);
}
