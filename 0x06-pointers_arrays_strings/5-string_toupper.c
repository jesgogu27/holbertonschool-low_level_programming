#include "holberton.h"

/**
 *string_toupper - funtion conver lowcase to uppcase
 *@s: Punter
 *Return: char string
 */

char *string_toupper(char *s)
{
int cont;

cont = 0;
while (s[cont] != '\0')
{
if (s[cont] >= 'a' && s[cont] <= 'z')
s[cont] = s[cont] - 32;
cont++;
}
return (s);
}
