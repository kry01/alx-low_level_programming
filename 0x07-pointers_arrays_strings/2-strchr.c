#include "main.h"
/**
 * _strchr - function to locates a char in a string.
 *
 * @s: string.
 * @c: char.
 *
 * Return: return the value.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
