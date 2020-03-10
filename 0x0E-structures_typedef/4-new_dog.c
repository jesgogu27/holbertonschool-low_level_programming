#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a dog struct
 *@name: name
 *@age: age
 *@owner: owner
 *Return: return a struct
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;

	dog_t *std = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	if (std == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
	}
	i++;
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	j++;
	std->name = malloc(i);
	if (std->name == NULL)
	{
		free(std);
		return (NULL);
	}
	_strcpy(std->name, name);

	std->owner = malloc(j);
	if (std->owner == NULL)
	{
		free(std);
		free(std->name);
		return (NULL);
	}
	_strcpy(std->owner, owner);

	std->age = age;
	return (std);
}

/**
 * _strcpy - check the code for Holberton School students.
 *@dest: destination
 *@src: source
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)

{
	int contador;

	contador = 0;

	while (*src != '\0')
	{
		dest[contador] = *src;
		src++;
		contador++;
	}
	dest[contador] = '\0';
	return (dest);
}


