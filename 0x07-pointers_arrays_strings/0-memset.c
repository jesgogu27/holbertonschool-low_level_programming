#include "holberton.h"

/**
 *_memset: fills n bytes of the memory area with the constant byte b
 *@s: pointer received.
 *@char: Character received.
 *@int: value of memory
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
return (0);
}
