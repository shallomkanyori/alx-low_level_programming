#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: A struct representing a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

int _strlen(char *str);

char *_strcpy(char *dest, char *src, int src_len);

void free_dog(dog_t *d);

#endif /* DOG_H */
