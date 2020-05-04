#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to integer.
 * @s: pointer recived
 * Return: integer
 */

int _atoi(char *s)
{
int c = 0;
int x;
int r = 0;
int n = 0;

while (s[c] != '\0')
{
c++;
}
for (x = 0; x < c; x++)
{
if (s[x] == '-')
{
r++;
}
if (s[x] >= 48 && s[x] <= 57)
{
n = ((n * 10) + (s[x] - '0'));
}
else if (n != 0)
{
break;
}
}
if (r % 2 != 0)
{
n = n * -1;
}
return (n);
}
