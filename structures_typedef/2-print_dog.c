#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints dog informations
 * @d: Pointer to dog
 */
void print_dog(struct dog *d)
{
	if (d->name != NULL)
		printf("Name: %s", d->name);
	else
		printf("Name: (nil)");
	
	printf("Age: %f", d->age);

	if (d->owner != NULL)
		printf("Owner: %s", d->owner);
	else
		printf("Owner: (nil)");
}
