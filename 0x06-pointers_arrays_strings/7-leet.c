#include "holberton.h"

/**
 * leet - a function that encodes a string
 * @s: string received
 * Return: string
 */

char *leet(char *s)
{
int i, f;

/*string to compare*/
char l[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char n[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (i = 0; s[i] != '\0'; i++)
{
for (f = 0; f <= 10; f++)
{
/*Compared received string*/
if (s[i] == l[f])
/*Assigned new value*/
s[i] = n[f];
}
}
return (s);
}
