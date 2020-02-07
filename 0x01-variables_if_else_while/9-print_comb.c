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
int main(void)
{
int x;
x = 48;
while (x < 58)
{
putchar(x);
if (x != 57)
{
putchar(',');
putchar(32);
}
else
{
putchar('$');
}
x++;
}
return (0);
}
