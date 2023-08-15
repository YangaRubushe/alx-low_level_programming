#include <stddef.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * This function initializes the members of a dog structure.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
                d->owner = owner;
	}
}
