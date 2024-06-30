#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a random valid password for 101-crackme.
 *
 * Return: 0.
 */
int main(void)
{
	char password[7];
	int i, sum = 0, target_sum = 2772;

	srand(time(0));

	for (i = 0; i < 6; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	password[6] = target_sum - sum;
	password[7] = '\0';

	printf("%s", password);

	return (0);
}

