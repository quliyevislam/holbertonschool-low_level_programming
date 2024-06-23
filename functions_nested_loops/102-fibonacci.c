#include <stdio.h>
/**
 * main - .
 *
 * Return: 0
 */
int main(void)
{
	int count;
	int F1 = 0;
	int F2 = 1;
	int sum;

	for (count = 0; count < 50; count++)
	{
		sum = F1 + F2;
		printf("%d", sum);

		F1 = F2;
		F2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
