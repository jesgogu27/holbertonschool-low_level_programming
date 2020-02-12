#include "holberton.h"
/**
 * print_alphabet - Print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{

char alf;
alf = 'a';
while (alf <= 'z')
{
_putchar(alf);
alf++;
}
_putchar('\n');
}

