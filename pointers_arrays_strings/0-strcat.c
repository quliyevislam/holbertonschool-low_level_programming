#include "main.h"
/**
 * _strcat - concatenates two strings.
 *
 * @dest: pointer to a char.
 *
 * @src: pointer to a char.
 *
 * Return: pointer to a char.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = i, k = 0; src[k] != '\0'; j++, k++)
	{
		dest[j] = src[k];
	}

	return (dest);
}
