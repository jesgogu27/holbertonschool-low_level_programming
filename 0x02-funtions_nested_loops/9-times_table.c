#include "holberton.h"

void times_table(void)
{
int a;
int b;
int x;
 x= 0;
for(a=0; a<10; a++)
{
	for (b=0; b<10; b++)
		{
			x = a * b;
			if (b == 0)
			{
			_putchar('0'+ x);

			} 
		
		}
	_putchar('\n');
}
}
