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

	while (*haystack)
	{
		if (*(haystack) == *(needle + i))
		{
			for (j = 0; *(needle + j) != '\0' ; j++)
			{
				if (*(haystack) == *(needle + j))
					return (haystack + 0);
				i++;
			}
			break;
		}
		haystack++;
	}
	return (0);
}
