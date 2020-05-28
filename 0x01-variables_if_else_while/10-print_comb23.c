#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int nested_numbers;
int numbers;
for (numbers = 48; numbers < 58; numbers++)
{
for (nested_numbers = 48; nested_numbers < 58; nested_numbers++)
{
putchar(numbers);
putchar(nested_numbers);
if (numbers == 57 && nested_numbers == 57)
{
continue;
}
putchar(44);
putchar(' ');
}
}
putchar(10);
return (0);
}