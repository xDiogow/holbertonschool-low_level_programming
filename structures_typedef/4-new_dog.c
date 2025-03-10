#include "dog.h"
#include <stdlib.h>
#include <string.h>

char *_strcpy(char *destination, char *src)
{
	int i = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		destination[i] = src[i];
	}
	destination[i] = '\0';

	return (destination);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nDog;

	nDog = malloc(sizeof(dog_t));
	if (nDog == NULL)
		return (NULL);
	
	nDog->name = malloc(strlen(name) + 1);
	if (nDog->name == NULL)
		return (NULL);
	nDog->name = _strcpy(nDog->name, name);

	nDog->age = age;

	nDog->owner = malloc(strlen(owner) + 1);
	if (nDog->owner == NULL)
		return (NULL);
	nDog->owner = _strcpy(nDog->owner, owner);

	return (nDog);
}
