#include <stdio.h>
/**
 * main - .
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long F1 = 0;
	unsigned long F2 = 1;
	unsigned long sum;

	for (count = 0; count < 50; count++)
	{
		sum = F1 + F2;
		printf("%lu", sum);

		F1 = F2;
		F2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
