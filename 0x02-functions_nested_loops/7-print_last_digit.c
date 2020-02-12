#include "holberton.h"
/**
 * print_last_digit -  function that prints the last digit of a number.
 * @r: int r
 * Return: x.
 */
int print_last_digit(int r)
{

int x;
if (r < 0)
{
r = r * -1;
}
x = r % 10;
_putchar(x + '0');
return (x);
}
