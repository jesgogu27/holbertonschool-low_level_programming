#include "holberton.h"

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
char **strtow(char *str)
{
	int i, x;
	char *a;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != 0)
		i++;

	a = malloc(i * sizeof(char) + 1);

	if (a == 0)
		return (NULL);

	for (x = 0; x < i; x++)
		a[x] = str[x];

	return (*a);
}
