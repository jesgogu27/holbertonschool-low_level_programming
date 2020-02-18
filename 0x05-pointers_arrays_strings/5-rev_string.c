#include "holberton.h"


/**
 *rev_string -  that reverses a string
 *@s: string
 *Return: Void
 */
void swap(char *a, char *b);
int _strlen(char *s);

void rev_string(char *s)
{
  
int x, i;


x = _strlen(s);

if (x > 2) {

for(i = 0;  i < x/2; i++)
{

 swap(s + i, s + x - i - 1 );
}
}
}

void swap(char *a, char *b)
{
char z;

z = *a;
*a = *b;
*b = z;
}

int _strlen(char *s)
{

int x;
x = 0;

while (*s != '\0')
{
s++;
x++;
}
return (x);
}
