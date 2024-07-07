#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: int.
 * @argv: pointer to a char array.
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;
	char *str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		str = argv[i];

		for (j = 0; str[j]; j++)
		{
			if (*(str + j) < '0' || *(str + j) > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
