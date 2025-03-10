#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog nDog;
	
	nDog.name = name;
	nDog.age = age;
	nDog.owner = owner;

	return (nDog);
}
