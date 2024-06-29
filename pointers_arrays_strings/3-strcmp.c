#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: char.
 * @s2: chat.
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
