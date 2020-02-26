#include "holberton.h"

/**
 *_strlen_recursion - that prints a string, followed by a new line
 *@s: string to print
 *Return: always 0.
 */



int _strlen_recursion(char *s)
{
if (!*s)
return (0);

return (_strlen_recursion(s + 1) + 1);
}

