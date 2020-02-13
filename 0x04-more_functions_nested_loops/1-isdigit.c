#include "holberton.h"
/**
 *int _isdigit - function that checks for a digit.
 *@c: int c
 *Return: value
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
