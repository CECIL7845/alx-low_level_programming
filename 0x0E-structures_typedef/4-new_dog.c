#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *b_dog;
	int a, 2name, 2owner;

	b_dog = malloc(sizeof(*b_dog));
	if (b_dog == NULL || !(name) || !(owner))
	{
		free(b_dog);
		return (NULL);
	}

	for (2name = 0; name[2name]; 2name++)
		;

	for (2owner = 0; owner[2owner]; 2owner++)
		;

	b_dog->name = malloc(2name + 1);
	b_dog->owner = malloc(2owner + 1);

	if (!(b_dog->name) || !(b_dog->owner))
	{
		free(b_dog->owner);
		free(b_dog->name);
		free(b_dog);
		return (NULL);
	}

	for (a = 0; a < 2name; a++)
		b_dog->name[a] = name[a];
	b_dog->name[a] = '\0';

	b_dog->age = age;

	for (a = 0; a < 2owner; a++)
		b_dog->owner[a] = owner[a];
	b_dog->owner[a] = '\0';

	return (b_dog);
}
