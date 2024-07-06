#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: pointer to a char.
 * @needle: pointer to a char.
 * Return: pointer to a char.
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (!haystack[i + j])
				return (0);

			if (haystack[i + j] == needle[j])
				k++;
		}

		if (k == j)
			return (haystack + i);

		k = 0;
	}

	return (0);
}
