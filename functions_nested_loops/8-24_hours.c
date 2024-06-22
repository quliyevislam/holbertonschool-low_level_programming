#include "main.h"
/**
 * jack_bauer - .
 *
 * Return: .
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (l = 0; l < 3; l++)
	{
		for (k = 0; k < 10; k++)
		{
			for (j = 0; j < 6; j++)
			{
				for (i = 0; i < 10; i++)
				{
					if (k == 4 && l == 2)
						break;
					_putchar('0' + l);
					_putchar('0' + k);
					_putchar(':');
					_putchar('0' + j);
					_putchar('0' + i);
					_putchar('\n');
				}
				if (k == 4 && l == 2)
					break;
			}
			if (k == 4 && l == 2)
				break;
		}
		if (k == 4 && l == 2)
			break;
	}


}
