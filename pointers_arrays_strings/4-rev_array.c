#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers.
 *
 * @a: pointer to an int.
 *
 * @n: pointer to an int.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int *end = a + n - 1;

	while (a != end && n > 0)
	{
		temp = *a;
		*a = *end;
		*end = temp;
		if (a + 1 == end)
			break;
		a++;
		end--;
	}
}
