#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Searches for an integer in an array and returns its index.
 * @array: Pointer to an array of integers.
 * @size: Size of the array.
 * @cmp: Pointer to a comparison function.
 *
 * Return: Index of the first element for which the
 * cmp function does not return 0.
 * If no element matches, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		if ((*cmp)(array[i]))
			return (i);

		i++;
	}

	return (-1);
}
