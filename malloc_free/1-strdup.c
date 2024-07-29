#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: given string.
 *
 * Return: NULL if the allocation fails,
 * or a pointer to the allocated memory.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ptr = malloc(sizeof(char) * i + 1);
	i = 0;

	if (ptr == NULL)
		return (NULL);

	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
