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
char x;
x=97;
while(x <= 122)
{
putchar(x);
x++;
if ((x==101) || (x== 113))
{
x++;
}
}
return 0;
}
