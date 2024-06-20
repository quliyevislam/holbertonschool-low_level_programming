#include <stdio.h>
/**
 * main - This is the entry point of the code
 *
 * Return: 0 Successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

		if (i == 9)
			continue;

		putchar(',');

		putchar(' ');
	}

	putchar('\n');

	return (0);
}
