#include "holberton.h"
#include <stdio.h>

/**
 * times_table - function that prints the 9 times table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{

int a, b, x;
x = 0;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
x = a * b;
if (b == 0)
{
_putchar('0');
}
else if (x >= 10)
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
}
else
{
_putchar(',');
_putchar(x + '0');
}
if (b != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}




