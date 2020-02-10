#include "holberton.h"

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

