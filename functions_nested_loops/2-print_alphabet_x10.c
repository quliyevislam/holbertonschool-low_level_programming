#include "main.h"
/**
 * print_alphabet - Prints the alphabet
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
			_putchar('a' + i);
		_putchar('\n');
	}
}
