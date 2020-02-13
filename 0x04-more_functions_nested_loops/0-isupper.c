#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: first integer
 * Return: result
 */

int _isupper(int c)
{

int a;

a = c;
if ((a >= 'A') && (a <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
