#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - print add
 *@n: num args.
 *Return: add
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum;

sum = 0;
va_list args;
va_start(args, n);

if (n != 0)
{
for (i = 0; i < n; i++)
{
sum = sum + va_arg(args, int);
}
va_end(args);
return (sum);
}
else
{
return (0);
}
}

