#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - to create new dog
 * @name: dog name
 * @age: age of dog age
 * @owner: dog owner
 * Return: new dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nameLength, ownerLength, i;
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);
	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	for (nameLength = 0; name[nameLength]; nameLength++)
		;
	nameLength++;
	newDog->name = malloc(nameLength * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < nameLength; i++)
		newDog->name[i] = name[i];
	newDog->age = age;
	for (ownerLength = 0; owner[ownerLength]; ownerLength++)
		;
	ownerLength++;
	newDog->owner = malloc(ownerLength * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < ownerLength; i++)
		newDog->owner[i] = owner[i];
	return (newDog);
}
