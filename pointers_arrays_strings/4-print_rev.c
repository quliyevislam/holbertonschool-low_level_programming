#include "main.h"
/**
 * print_rev - returns the length of a string.
 *
 * @s: pointer to a char.
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != 0)
	{
		len++;
	}

	while(len != 0)
	{
		len--;
		_putchar(*(s + len));
	}

	_putchar('\n');
}
