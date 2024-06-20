#include <stdio.h>
/**
 * main - This is the entry point of the code
 *
 * Return: 0 Successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i == 4 || i == 16)
			continue;

		putchar('a' + i);
	}

	putchar('\n');

	return (0);
}
