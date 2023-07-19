#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Pointer to the dog's name
 * @age: dog's age
 * @owner: Pointer to the dog's owner's name
 *
 * Description: This function initializes the members of a dog structure by
 * assigning the provided name, age, and owner values to the respective
 * members of the dog structure pointed to by 'd'.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
