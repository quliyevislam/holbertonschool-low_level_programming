#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to a char.
 * @accept: pointer to a char.
 * Return: number of bytes in the initial segment
 *  of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;
	int k = 0;

	for (i = 0; s[i]; i++)
	{

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				k = 1;
		}
		if (!k)
			return (i);

		else
			k = 0;
	}
	return (0);
}
