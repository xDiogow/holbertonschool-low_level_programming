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
typedef struct dog_t dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
