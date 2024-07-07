#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: int.
 * @argv: pointer to a char array.
 * Return: 0.
 */
int main(int argc, char *argv[])
{

	int i;

	for (i = 0;*argv[i - 1] && i < argc; i++)

	printf("%d", i + 1);

	return (0);
}
