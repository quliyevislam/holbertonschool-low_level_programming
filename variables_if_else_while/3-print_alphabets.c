#include <stdio.h>
/**
 * main - This is the entry point of the code
 *
 * Return: 0 Successful
 */
int main(void)
{
	int i = 0;

	while (i < 26)
	{
		putchar('a' + i);
		i++;
	}

	while (i < 52)
	{
		putchar('A' + i);
		i++;
	}

	putchar('\n');

	return (0);
}
