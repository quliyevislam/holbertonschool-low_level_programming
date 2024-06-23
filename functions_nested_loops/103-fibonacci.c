#include <stdio.h>
/**
 * main - .
 *
 * Return: 0
 */
int main(void)
{
	unsigned long F1 = 0, F2 = 1, Fsum;
	float sum;

	while (1)
	{
		Fsum = F1 + F2;
		if (Fsum > 4000000)
			break;

		if ((Fsum % 2) == 0)
			sum += Fsum;

		F1 = F2;
		F2 = Fsum;
	}
	printf("%.0f\n", sum);

	return (0);
}
