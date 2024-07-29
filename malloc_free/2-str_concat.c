#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: NULL if the allocation fails,
 * or a pointer to the allocated memory.
 **/

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	ptr = malloc(sizeof(char) * (i + j) + 1);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}

	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}

	ptr[i + j] = '\0';

	return (ptr);
}

