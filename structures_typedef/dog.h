#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure of a dog
 * @name: Dog's Name
 * @age: Dog's age
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
