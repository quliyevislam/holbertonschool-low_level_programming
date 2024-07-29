#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The size of the memory to be allocated.
 *
 * Return: Terminate with status 98 if the allocation fails,
 * or a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
