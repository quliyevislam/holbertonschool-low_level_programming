#include <stdio.h>
/**
 * main - This is the entry point of the code
 *
 * Return: 0 Successful
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
		putchar('a' + i);

	putchar('\n');

	return (0);
}
