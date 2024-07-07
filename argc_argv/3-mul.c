#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: int.
 * @argv: pointer to a char array.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error");
		return (0);
	}

	sum = atoi(argv[1]) + atoi(argv[2]);
	printf("%d\n", sum);

	return (0);
}
