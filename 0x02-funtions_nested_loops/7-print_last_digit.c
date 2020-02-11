#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
