#include "holberton.h"

/**
 * print_diagonal - that draws a diagonal line
 *@n: integer
 *Return: n
 */

void print_diagonal(int n)
{

int a = 0;
int b = 0;

if (n > 0)
{
while (a < n)
{
while (b < a)
{
_putchar(' ');
b++;
}
a++;
b = 0;
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}
