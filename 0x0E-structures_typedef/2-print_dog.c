#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: A pointer to Structure
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
		d = "(nil)";
	if (d->name == NULL)
		d->name = "(nil)";
	printf("name: %s \nage: %f \nowner: %s", d->name, d->age, d->owner);
}
