#include "holberton.h"

/**
 * _strcpy -The standard library provides a similar function: strcpy
 * @dest: pointer received
 * @src: pointer received
 * Return: the point to dest
 */

char *_strcpy(char *dest, char *src)
{

int i;

for (i = 0; src[i] != 0; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);

}
