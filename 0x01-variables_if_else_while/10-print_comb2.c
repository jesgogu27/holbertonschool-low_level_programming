
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
int a;
int b;
a = 48;
b = 48;
while (a < 58)
{
while (b < 58)
{
putchar (a);
if (b != 57)
{
putchar (b);
putchar (',');
putchar (32);
}
else
{
putchar (b);
putchar (32);
}
b++;
}
b = 48;
a++;
}
putchar ('\n');
return (0);
}

