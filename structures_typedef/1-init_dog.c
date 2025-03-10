#include "main.h"
#include <stdio.h>
#include <stdlib.h>


void init_dog(struct dog *d, char *name, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
