#include "holberton.h"

/**
 *_strspn - that gets the length of a prefix substring
 *@s: pointer 1 received
 *@accept: pointer 2 received
 *Return: number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
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
if (accept[j] == s[i])
break;
}
if (!accept[j])
break;
}
return (i);
}
