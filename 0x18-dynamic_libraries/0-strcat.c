#include "holberton.h"

/*int _strlen(char *s);*/

/**
 *_strcat - concatent a string
 *@dest: string 1
 *@src: strin 2 a concatent
 *Return: a char
 */

char *_strcat(char *dest, char *src)
{
int tamH, tamW, i;

tamH = _strlen(dest);
tamW = _strlen(src);

for (i = 0; i <= tamW && src != 0; i++)
{
dest[tamH + i] =  src[i];
}
return (dest);
}

/**
 *_strlen -  count string
 *@s: string
 *Return: Void
 */
/*
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
*/
