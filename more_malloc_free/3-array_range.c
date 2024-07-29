#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max.
 *
 * @min: minimum value of the integer range.
 * @max: maximum value of the integer range.
 *
 * Return: NULL if the allocation fails,
 * or a pointer to the allocated memory.
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		ptr[i - min] = i;

	return (ptr);
}
