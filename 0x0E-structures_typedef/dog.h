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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
#endif
