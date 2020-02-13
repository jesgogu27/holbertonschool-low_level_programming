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
if ((a >= 'a') && (a <= 'z'))
{
return (0);
}
else
{
return (1);
}
}
