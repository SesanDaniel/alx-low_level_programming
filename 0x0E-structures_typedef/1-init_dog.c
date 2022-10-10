#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: structure character
 * @name: Name character in defined structure
 * @age: a Float defining the age in structure dog
 * @owner: A character defining the owner of structre dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
