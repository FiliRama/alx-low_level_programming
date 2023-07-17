#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - to Initialize structure of dog
 * @d: structure to initialize
 * @name: The name of the dog name
 * @age: The age of the dog age
 * @owner: The owner of the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
