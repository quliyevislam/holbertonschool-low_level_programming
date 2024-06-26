#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: int.
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;
		int l1 = size;
		int l2 = 0;

		for (i = 0; i < size; i++)
		{
			l1--;
			l2++;

			for (j = 0; j < l1; j++)
			{
				_putchar(' ');
			}

			for (j = 0; j < l2; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
