#include "main.h"
/**
 * _strpbrk - function to searches a string.
 *
 * @s: the string.
 * @accept: the accept string.
 *
 * Return: the matching string.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
		i++;
	}
	return (0);
}
