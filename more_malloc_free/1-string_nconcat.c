#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes from s2 to be copied.
 *
 * Return: NULL if the allocation fails,
 * or a pointer to the allocated memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (j <= n)
		n = j;

	ptr = malloc(sizeof(char) * (i + n) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
