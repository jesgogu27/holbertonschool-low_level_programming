#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabeth lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char alf;
int i;
alf = 'a';
i = 0;
while (i <= 9)
{
while (alf <= 'z')
{
_putchar(alf);
alf++;
}
_putchar('\n');
i++;
alf = 'a';
}
}
