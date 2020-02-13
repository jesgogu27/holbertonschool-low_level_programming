#include "holberton.h"

/**
 * print_line - that prints 10 times the numbers, from 0 to 14
 *@n: integer
 *Return: n
 */

void print_line(int n)
{

int a, b;

a = n;

for (b = 0; b < a; b++)
{
_putchar(95);
}
_putchar('\n');
}
