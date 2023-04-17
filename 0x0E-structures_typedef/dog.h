#ifndef DOG_H
#define DOG_H
/**
 * struct dog - new type struct dog.
 * @name: the name of dog.
 * @age: dog's age.
 * @owner: the dog owner.
 *
 * Description: Define a new type struct dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
