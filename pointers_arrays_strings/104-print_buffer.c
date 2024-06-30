#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - Prints a buffer.
 * @b: pointer to a char.
 * @size: int.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		rintf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);

			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ")
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (isprint(b[i + j]))
					printf("%c", b[i + j]);

				else
					printf(".");
			}
		}

		printf("\n");
	}
}
