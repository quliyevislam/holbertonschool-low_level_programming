#include "main.h"
/**
 * _atoi - convert a string to an integer.
 *
 * @s: pointer to a char.
 *
 * Return: int.
 */
int _atoi(char *s)
{
	int i;
	int k = 1;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		num = num * 10 + s[i] - '0';

		if (s[i] >= '0' && s[i] <= '9' && s[i - 1] == '-')
		k = -1;
	}

	return (num * k);
}
