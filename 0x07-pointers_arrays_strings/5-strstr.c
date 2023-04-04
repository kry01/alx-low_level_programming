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
	int i = 0;

	while (*haystack)
	{
		if (*(haystack) == *(needle + i))
		{
			while (*(haystack + i) == *(needle + i))
			{
				if (*(needle + i + 1) == '\0' )
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return (0);
}
