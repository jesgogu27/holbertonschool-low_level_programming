#include <stdio.h>
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
putchar(' ');
}
else
{
putchar('\n');
break;
}
x++;
}
return (0);
}
