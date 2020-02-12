#include "holberton.h"
/**
 * print_last_digit - prints last digit.
 * @r: int r
 * Return: x
 */
int print_last_digit(int r)
{

int x;
x = r % 10;
if (r < 0)
{
r = r * -1;
}
_putchar(x + '0');
return (x);
}
