#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int a, n, o;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (n = 0; name[n]; n++)
		;

	for (o = 0; owner[o]; o++)
		;

	p_dog->name = malloc(n + 1);
	p_dog->owner = malloc(o + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (a = 0; a < n; a++)
		p_dog->name[a] = name[a];
	p_dog->name[a] = '\0';

	p_dog->age = age;

	for (a = 0; a < o; a++)
		p_dog->owner[a] = owner[a];
	p_dog->owner[a] = '\0';

	return (p_dog);
}
