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
char alf;
alf = 'a';
while (alf <= 'z')
{
putchar (alf);
alf++;
}
putchar('\n');
return (0);
}
