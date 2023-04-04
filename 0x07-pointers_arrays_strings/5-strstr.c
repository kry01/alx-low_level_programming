#include "main.h"
/**
 * _strstr - function to searches a string.
 *
 * @haystack: the string.
 * @needle: the accept string.
 *
 * Return: the matching string.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + 0))
		{
			for (j = 1; *(needle + j) != '\0' ; j++)
			{
				i++;
				if (*(haystack + i) == *(needle + j))
					return (haystack + i - 1);
			}
			break;
		}
		i++;
	}
	return (0);
}
