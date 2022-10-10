#ifndef MY_HEADER_
#define MY_HEADER_

/**
 * struct dog - structure that defines dog
 * @name: Pointer to a character name
 * @age: A float input
 * @owner: Pointer to a character owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
