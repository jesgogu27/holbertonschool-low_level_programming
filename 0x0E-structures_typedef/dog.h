#ifndef _dog_h_
#define _dog_h_

/**
 *struct dog - conteint dates.
 *@name: name string.
 *@age: years old.
 *@owner: owner of pet.
 */


struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
