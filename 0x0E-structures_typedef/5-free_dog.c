#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs (variables of type struct dog)
 * @d: the pointer to the dog
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
