#include "holberton.h"
/**
 *factorial - that returns the factorial of a given number
 *@n: factorial number.
 *Return: an integer.
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n > 0)
{
return (n * factorial(n - 1));
}
else
{
return (-1);
}
}
