#include <stdlib.h>
#include <stdio.h>

/**
 *main - received two parameters
 *@argc: count.
 *@argv: vector.
 *Return: always 0.
 */
int main(int argc, char *argv[])
{
int i, sum;
sum = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
sum += 1;
}
return (1);
}
