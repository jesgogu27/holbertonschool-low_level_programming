#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - print array
 *@size: size of array
 *@c: element of array.
 *Return: c
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *l;

	if (size == 0)
	{
		return (NULL);
	}

	l = (char *) malloc(size * sizeof(c));

	for (i = 0; i < size; i++)
	{
		l[i] = c;
	}
	return (l);
}
