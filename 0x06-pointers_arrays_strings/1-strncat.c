#include "holberton.h"

int _strlen(char *s);

/**
 *_strncat - concatent a string
 *@dest: string 1
 *@src: strin 2 a concatent
 *@n: maximum number of characters to be appened
 *Return: a char
 */

char *_strncat(char *dest, char *src, int n)
{
int tamH, tamW, i;

tamH = _strlen(dest);
tamW = _strlen(src);

for (i = 0; i <= tamW && src != 0; i++)
{
if (i < n)
{
dest[tamH + i] =  src[i];
}
}
return (dest);
}

/**
 *_strlen -  count string
 *@s: string
 *Return: Void
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
