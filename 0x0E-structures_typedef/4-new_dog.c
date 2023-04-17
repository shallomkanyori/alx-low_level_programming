#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: A pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(*dog));

	if (dog == NULL)
		return (NULL);

	dog->name = name == NULL ? NULL : strdup(name);
	if (name != NULL && dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = owner == NULL ? NULL : strdup(owner);
	if (owner != NULL && dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
