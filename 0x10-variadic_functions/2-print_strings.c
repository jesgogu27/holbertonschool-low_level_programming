#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - print name and last name
 *@n: num args.
 *@separator: charcter separator.
 *Return: add
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

if (separator == NULL)
{
return;
}

unsigned int i;
char *a;



va_list args;
va_start(args, n);


for (i = 0; i < n; i++)
{
a = va_arg(args, char *);
if (a == NULL)
{
printf("nil");
}
else
{
printf("%s", a);
}
if (n != i + 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
