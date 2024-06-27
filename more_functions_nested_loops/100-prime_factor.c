#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143.
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	unsigned long num = 612852475143;

	for (i = 2; num != 1; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
	}

	printf("%d\n", i);	

	return (0);
}
