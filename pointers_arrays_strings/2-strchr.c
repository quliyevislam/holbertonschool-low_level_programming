#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s: pointer to a char.
 * @c: char.
 * Return: NULL or char.
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)

	for (j = 0; j < i; j++)
	{
		if (s[j] == c)

		return (s + j);
	}

	return (s + i);
}
