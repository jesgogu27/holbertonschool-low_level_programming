#include "holberton.h"

/**
 *_strdup - print string
 *srt: string.
 *Return: string
 */

char *_strdup(char *str)
{
char *p;
int i, c;

c = 1;

if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
c++;

p = malloc(c);

if (p == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
p[i] = str[i];

return (p);

}
