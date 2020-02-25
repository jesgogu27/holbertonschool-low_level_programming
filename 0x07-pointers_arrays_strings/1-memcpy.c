#include "holberton.h"

/**
 *_memcpy - standard library provides a similar function: memcpy
 *@dest: pointer received.
 *@src: pointer received.
 *@n: value of memory
 *Return: char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i, f;
char *p, *k;
p = dest;
k = src;
f = n;


for (i = 0; i < f; i++)
{
p[i] = k[i];
}
return (k);

}
