#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @str: the string to find the length of
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str && str[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies string from src to dest
 * @dest: the pointer to the string to copy to
 * @src: the pointer to the string to copy from
 * @src_len: the length of the src string
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src, int src_len)
{
	int i;

	for (i = 0; i < src_len; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: A pointer to the new dog. NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len = _strlen(name);
	int owner_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name, name_len);
	_strcpy(dog->owner, owner, owner_len);
	dog->age = age;

	return (dog);
}
