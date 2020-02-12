#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints from any integer to 98
 * @a: int a
 *
 * Return: void
 */

void print_to_98(int a)
{

while (a != 98)
{
printf("%i, ", a);
if (a > 98)
a--;
else
a++;
}
printf("98\n");

}
