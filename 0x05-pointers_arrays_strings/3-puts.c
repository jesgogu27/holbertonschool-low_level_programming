#include "holberton.h"

/**
 *_puts - that prints a string, followed by a new line
 *@str: string
 *
 *Return: 0
 */

void _puts(char *str)
{
char a;
while (*str != '\0')
{
str++;
a = *str;
_putchar(a);
}
_putchar('\n');
}
