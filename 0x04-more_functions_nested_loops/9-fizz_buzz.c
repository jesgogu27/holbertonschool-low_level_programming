#include <stdio.h>
/**
 * main - checks for uppercase character.
 * Return: 0
 */
int main(void)
{
int a = 1;
while (a <= 100)
{
if (a % 3 == 0 && a % 5 == 0)
printf("FizzBuzz ");
else if (a % 5 == 0)
{
if (a == 100)
{
printf("Buzz");
printf("\n");
}
else
printf("Buzz ");
}
else if a % 3 == 0)
printf("Fizz ");
else
printf("%d ", h);
a++;
}
return (0);
}
