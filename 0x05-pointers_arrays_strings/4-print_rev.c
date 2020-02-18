#include "holberton.h"

/**
 *print_rev- that prints a string, in reverse
 *@s: string
 *
 *Return: 0
 */

void print_rev(char *s)
{
char a;
int x;

x = 0;

while (*s != '\0')
{
s++;
x++;
}

while (x >= 0)
{
a = *s;
_putchar(a);
x--;
s--;
}
_putchar('\n');
}
