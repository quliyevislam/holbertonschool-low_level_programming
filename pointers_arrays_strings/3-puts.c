#include "main.h"
/**
 * _puts - returns the length of a string.
 *
 * @str: pointer to a char.
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != 0)
	{
		len++;
		_putchar(*(str + len));
	}

	_putchar('\n');
}
