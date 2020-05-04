#include "holberton.h"

/**
 *_strpbrk - provides a similar function: strpbrk
 * @s: pointer 1 received
 * @accept: pointer 2 received
 * Return: a pointer to the byte s
 */

char *_strpbrk(char *s, char *accept)
{

int i, j;

if ((s == NULL) || (accept == NULL))
{
return (0);
}

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
return (s + i);
}
}
return ('\0');
}
