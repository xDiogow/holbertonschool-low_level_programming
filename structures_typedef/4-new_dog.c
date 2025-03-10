#include "dog.h"
#include <stdlib.h>
#include <strings.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nDog;

	nDog = malloc(sizeof(dog_t));
	if (nDog == NULL)
		return (NULL);
	
	nDog->name = name;
	nDog->age = age;
	nDog->owner = owner;

	return (nDog);
}
