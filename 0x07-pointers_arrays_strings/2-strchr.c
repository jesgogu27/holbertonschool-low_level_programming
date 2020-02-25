#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 * @s: is the parameter.
 * @c: is other parameter.
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
}
