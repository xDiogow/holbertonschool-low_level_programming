#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nDog;

	nDog = malloc(sizeof(dog_t));
	if (nDog == NULL)
		return (NULL);
	
	nDog->name = malloc(strlen(name) + 1);
	if (nDog->name == NULL)
		return (NULL);
	nDog->name = strcpy(nDog->name, name);

	nDog->age = age;

	nDog->owner = malloc(strlen(owner) + 1);
	if (nDog->owner == NULL)
		return (NULL);
	nDog->owner = strcpy(nDog->owner, owner);

	return (nDog);
}
