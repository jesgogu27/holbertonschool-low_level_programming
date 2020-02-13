#include "holberton.h"

/**
 * print_numbers - checks for a digit (0 through 9)
 * Return: always (0)
 */

void print_numbers(void)
{

int a;

for (a = 0; a < 10; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
