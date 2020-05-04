#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: first integer
 * Return: result
 */

int _isdigit(int c)
{

int a;

a = c;

if ((a >= '0') && (a <= '9'))
{
return (1);
}
else
{
return (0);
}
}
