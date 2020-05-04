#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@s: string received
 *
 *Return: the length of a string
 */

int _strlen(char *s)
{

int x;
x = 0;

while (*s != '\0')
{
s++;
x++;
}
return (x);
}
