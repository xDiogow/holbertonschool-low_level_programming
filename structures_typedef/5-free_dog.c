#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Free dog
 * @d: THE dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
