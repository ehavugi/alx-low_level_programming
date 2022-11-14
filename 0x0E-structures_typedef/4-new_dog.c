#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: onwer of the dog
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);

}
