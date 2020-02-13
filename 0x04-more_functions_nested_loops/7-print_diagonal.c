#include "holberton.h"

/**
 * print_diagonal - that draws a diagonal line
 *@n: integer
 *Return: n
 */

void print_diagonal(int n)
{

int a, b, c, f, r, m;
a = n;
m = n;
f = n;

for (f = 0; f < a; f++)
{
c = a - m;
for (b = 0; b < c; b++)
{
_putchar(' ');
r = c - b;
if ((r == 1) && (r > 1)) 
{
  _putchar(92);
}
if (r == 1)
{
_putchar(92);
}
}
_putchar('\n');
m--;
}
}
