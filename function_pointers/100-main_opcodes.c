#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of command line arguments.
 * @argv: The array of command line arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr  = (char *)main;

	for (i = 0; i < atoi(argv[1]) - 1; i++)
		printf("%02x ", (unsigned char)ptr[i]);


	printf("%02x\n", (unsigned char)ptr[i]);

	return (0);
}
