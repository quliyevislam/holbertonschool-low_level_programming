#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: Pointer to an intiger.
 * @b: Pointer to an intiger.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
