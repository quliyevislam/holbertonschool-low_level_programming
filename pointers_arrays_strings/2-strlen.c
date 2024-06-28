#include "main.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer to a char.
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int len;
	char a;

	for (len = 0; a != 0; len++)
	{
		a = *(s + len);
	}

	return (len + 1);
}
