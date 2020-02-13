#include "holberton.h"
/**
 *int _isupper - function that checks for uppercase character
 *@c: int c
 *Return: value
 */

int _isupper(int c)
{

int a;

a = c;

if ((a >= 'a') && (a <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
