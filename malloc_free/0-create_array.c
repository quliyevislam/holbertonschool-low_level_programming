#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and
 * initializes it with a specific char.
 *
 * @size: The size of the memory to allocate.
 * @c: The char to initialize the array.
 *
 * Return: NULL if the allocation fails,
 * or a pointer to the allocated memory.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
