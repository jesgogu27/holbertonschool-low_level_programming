#include "holberton.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
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

