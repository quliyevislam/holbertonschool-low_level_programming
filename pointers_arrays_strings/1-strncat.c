#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: pointer to a char.
 * @src: pointer to a cahr.
 * @n: int.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	int k;

	while (dest[i] != '\0')
	{
	i++;
	}

	for (j = i, k = 0; k < n && src[k] != '\0'; j++, k++)
	{
	dest[j] = src[k];
	}

	return (dest);
}
