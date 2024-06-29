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
	int i;
	int j;

	while (*(src + i) != 0)
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}

	return (dest);
}
