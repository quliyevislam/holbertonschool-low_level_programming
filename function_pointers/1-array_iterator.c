#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as
 * a parameter on each element of an array.
 * @array: Pointer to an array of integers.
 * @size: Size of the array.
 * @action: Pointer to the given function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		(*action)(array[i]);
	i++;
	}
}
