#include "dog.h"
#include <stdio.h>

/**
 *init_dog - conteint dates.
 *@name: name string.
 *@age: years old.
 *@owner: owner of pet.
 *@d: pointer struct.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
return;

d->name = name;

d->age = age;

d->owner = owner;

}
