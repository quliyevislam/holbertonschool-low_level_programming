#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 *
 * @str: pointer to a str.
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (*(str + i) != 0)
	{
	i++;
	}

	for (j = i / 2; j < i; j++)
	{
	_putchar(*(str + j));
	}

	_putchar('\n');
}
