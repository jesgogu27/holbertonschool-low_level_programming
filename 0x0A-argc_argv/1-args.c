#include <stdlib.h>
#include <stdio.h>

/**
 *main - received two parameters
 *@argc: count.
 *@argv: vector.
 *Return: always 0.
 */


int main(int argc, __attribute__((unused)) char *argv[])
{
int i, sum;
sum = 0;
if (argc == 1)
{
printf("%d\n", sum);
}
else if (argc > 1)
{
for (i = 1; i < argc; i++)
{
sum += 1;
}
printf("%d\n", sum);
}
return (1);
}
