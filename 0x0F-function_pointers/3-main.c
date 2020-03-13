#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int (*res)(int, int);
	int resul;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	res = get_op_func(argv[2]);
	if (res == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	resul = res(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", resul);
	return (0);
}
