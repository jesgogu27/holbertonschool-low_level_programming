#include "holberton.h"

/**
 *puts2 - that prints of 2 to 2
 *@str: string
 *
 *Return: 0
 */


void puts2(char *str)
{
char a;
int i;
i = 0;
while (*str != '\0')
{
a = *str;
if (i % 2 == 0)
{
_putchar(a);
}
i++;
str++;
}
_putchar('\n');
}


