#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: the name of dog.
 * @age: the age of dog.
 * @owner: the owner of dog.
 *
 * Return: retuen 0 or value
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j, x;

	d = malloc(sizeof(dog_t));
	if (d == 0 || owner == 0 || name == 0)
	{
		free(d);
		return (0);
	}
	for (i = 0; *(name + i) != 0; i++)
		;
	for (j = 0; *(owner + j) != 0; j++)
		;

	d->name = malloc(i + 1);
	d->owner = malloc(j + 1);

	if (d->name == 0 || d->owner == 0)
	{
		free(d->name);
		free(d->owner);
		return (0);
	}
	for (x = 0; x <= i + 1; x++)
		(*d).name[x] = *(name + x);
	for (x = 0; x <= j + 1; x++)
		(*d).owner[x] = *(owner + x);
	d->age = age;
	return (d);
}
