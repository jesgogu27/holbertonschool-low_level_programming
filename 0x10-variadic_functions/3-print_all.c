#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * p_carac - print character
 * @args: data
 * Return: Nothing
 */
void p_carac(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * p_ent - print integer
 * @args: data
 * Return: Nothing
 */
void p_ent(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * p_flot - print float
 * @args: data
 * Return: Nothing
 */
void p_flot(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * p_cad - print string
 * @args: data
 * Return: Nothing
 */
void p_cad(va_list args)
{

char *j;
j = va_arg(args, char*);

if (j == NULL)
{
printf("(nill)");
return;
}
printf("%s", j);
}

/**
 * print_all - print all data type
 * @format: data
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{

int i, j;
char *separator = "";
va_list args;

cf ptr[] = {
{"c", p_carac},
{"i", p_ent},
{"f", p_flot},
{"s", p_cad},
};

va_start(args, format);

i = 0;
j = 0;


while (format != NULL && *(format + i) != '\0')
{

while (j < 4)
{
if (ptr[j].cacrec[0] == format[i])
{
printf("%s", separator);
ptr[j].f(args);
separator = ", ";
break;
}
j++;
}
i++;
j = 0;
}

va_end(args);
printf("\n");
}
