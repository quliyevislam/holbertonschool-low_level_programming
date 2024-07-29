#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *
 * @width: Width of the 2D array.
 * @height: Height of the 2D array.
 *
 * Return: NULL if the allocation fails,
 * or a pointer to the allocated memory.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptp;

	if (width < 1 || height < 1)
		return (NULL);

	ptp = malloc(sizeof(int *) * height);

	if (ptp == NULL)
	{
		free(ptp);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(ptp + i) = malloc(sizeof(int) * width);

		if (*(ptp + i) == NULL)
		{
			for (j = 0; j <= i; j++)
				free(*(ptp + j));
			free(ptp);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(ptp + i) + j) = 0;
	}

	return (ptp);
}
