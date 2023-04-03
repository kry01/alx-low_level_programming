#include "main.h"
/**
 * _strspn - function to return number.
 *
 * @s: string.
 * @accept: string 2.
 *
 * Return: return the value.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, check;

	while (*(s + i) != '\0')
	{
		check = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				check = 0;
				break;
			}

		}
		if (check == 1)
			break;
		i++;
	}
	return (i);
}
