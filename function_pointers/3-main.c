#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program.
 * @argc: Argument count. The number of arguments passed to the program.
 * @argv: Argument vector. An array of strings representing
 * the arguments passed to the program.
 * Return: 0 on success,
 * 98 if the number of arguments is incorrect,
 * 99 if the operator is invalid,
 * or 100 if there is an attempt to divide by zero.
 */
int main(int argc, char *argv[])
{
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		return (100);
	}

	fptr = get_op_func(argv[2]);

	if (argv[2][1] != 0 || fptr == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", (*fptr)(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
