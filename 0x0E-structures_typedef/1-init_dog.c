#include "dog.h"
#include <stdio.h>
/**
 * init_dog - print dogs name
 * @d: pointer to data
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 * Return : void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	printf("%s %s %f %s\n", *d, *name, age, *owner);
}
