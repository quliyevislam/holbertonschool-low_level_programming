#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: NULL if the allocation fails,
 *         or a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
