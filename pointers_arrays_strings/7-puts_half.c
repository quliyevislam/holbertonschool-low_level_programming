#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 *
 * @str: pointer to a str.
 */
void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	while (*(str + i) != 0)
	{
	i++;
	}
if (i % 2 == 1)
{
	k = (i - 1)/2;
}
else
{
	k = i/2;
}
	for (j = k; j < i; j++)
	{
	_putchar(*(str + j));
	}

	_putchar('\n');
}
