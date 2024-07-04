#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to a char.
 * @accept: pointer to a char.
 * Return: pointer to a char.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				k = 1;
		}
			if (k)
				return (s + i);
		}

	return (0);

}
