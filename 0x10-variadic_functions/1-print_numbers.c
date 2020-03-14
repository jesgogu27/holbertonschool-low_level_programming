#include "variadic_functions.h"


/**
 * print_numbers - print numbers
 * @separator: character separator
 * @n: number the arguments
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

unsigned int i;
int a = 0;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
a = va_arg(args, int);
printf("%i", a);
if ((n != i + 1) && (separator != NULL))
printf("%s", separator);
}
printf("\n");
va_end(args);
}
