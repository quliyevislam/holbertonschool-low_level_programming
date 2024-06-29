#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed to by src.
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * Return: pointer to a char.
 */
char *_strcpy(char *dest, char *src)
{
	int j;


	for (j = 0; *(src + j) != 0; j++)
	{
		dest[j] = *(src + j);
	}

	dest[j] = '\0';

	return (dest);
}
