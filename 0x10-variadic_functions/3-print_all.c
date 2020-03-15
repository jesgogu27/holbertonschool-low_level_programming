#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * p_carac - print character
 * @c: data
 * Return: Nothing
 */
void p_carac(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * p_ent - print integer
 * @f: data
 * Return: Nothing
 */
void p_ent(va_list f)
{
	printf("%i", va_arg(f, int));
}

/**
 * p_flot - print float
 * @f: data
 * Return: Nothing
 */
void p_flot(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * p_cad - print string
 * @s: data
 * Return: Nothing
 */
void p_cad(va_list s)
{
	char *j;

	j = va_arg(s, char *);

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
		{"s", p_cad}
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
	printf("\n");
	va_end(args);
}
