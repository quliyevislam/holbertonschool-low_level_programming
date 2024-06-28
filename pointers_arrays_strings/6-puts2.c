#include "main.h"
/**
 * puts2 - prints every other character of a string.
 *
 * @str: pointer to a str;
 */
void puts2(char *str)
{
	int i = -1;

	do
	{
		i++;

		if(i % 2 != 0)
		continue;

		_putchar(*(str + i));
	}while (*(str + i + 1) != 0);

	_putchar('\n');
}
