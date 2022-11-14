#include "dog.h"

/**
 * init_dog - initializer for dog
 * @d: dog struct to initalize
 * @name: name of dog
 * @age: age of dog
 * @owner:owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

