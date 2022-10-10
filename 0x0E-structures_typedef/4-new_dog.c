#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: Name of dog
 * @age: Dog's age
 * @owner: Dog;s owner
 * Return: Pointer to new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *namecpy, *ownercpy;
	int namelen = 0, ownerlen = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[namelen])
		namelen++;
	while (owner[ownerlen])
		ownerlen++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	namecpy = malloc(namelen + 1);
	if (namecpy == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		namecpy[i] = name[i];
	namecpy[i] = '\0';

	ownercpy = malloc(ownerlen + 1);
	if (ownercpy == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		ownercpy[i] = owner[i];
	ownercpy[i] = '\0';

	new_dog->name = namecpy;
	new_dog->age = age;
	new_dog->owner = ownercpy;

	return (new_dog);
}
