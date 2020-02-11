#include "holberton.h"

void jack_bauer(void){

	int a;
	int b;
	int c;
	int d;
	
	a = 0;
	b = 0;
	c = 0;
	d = 0;

	while (a < 3)
	{
		while (b < 10)
		{
			if((a == 2) && (b == 4))
			{
				break;
			}
			else
			{
				while (c < 6)
					{
						while (d < 10)
							{
								_putchar('0'+a);
								_putchar('0'+b);
								_putchar('0'+10);
								_putchar('0'+c);
								_putchar('0'+d);
								_putchar('\n');
							d++;
							}
					d=0;
					c++;
					}
			c=0;
			b++;
			}
		}
	b=0;
	a++;
	}
  
}
