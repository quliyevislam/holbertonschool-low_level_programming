#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is the entry point of the code
 *
 * Return: 0 Successful
 */
int main(void)
{
int n;
int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = ((n % 10) * n) / (unsigned int) n;

	printf("Last digit of %d is %d ", n, m);

	if (m == 0)
		printf("and is 0\n");

	else if (m > 5)
		printf("and is greater than 5\n");

	else
		printf("and is less than 6 and not 0");

	return (0);
}
