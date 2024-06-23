#include <stdio.h>
/**
 * main - .
 *
 * Return: 0
 */
int main(void)
{
	unsigned long F1 = 0;
	unsigned long F2 = 1;
	unsigned long Fsum;
	int tot_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
