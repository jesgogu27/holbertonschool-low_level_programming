#include "holberton.h"

/**
 *_memset - standard library provides a similar function: memset.
 *@s: pointer received.
 *@b: Character received.
 *@n: value of memory
 *Return: char.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
char *p;
p = s;

for (i = 0; i < n; i++)
{
p[i] = b;
}
return (p);
}
