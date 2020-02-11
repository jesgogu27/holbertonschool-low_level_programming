#include "holberton.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{

int a;
int b;
int x;
x= 0;
for (a = 0; a < 10; a++)
{
	for (b = 0; b < 10; b++)
		{
			x = a * b;
			if (b == 0)
			{
				_putchar('0' + x);

			} 
		
		}
	_putchar('\n');
}
}
