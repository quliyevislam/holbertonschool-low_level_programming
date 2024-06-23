#include <stdio.h>
/**
 * main - .
 *
 * Return:
 */
int main(void)
{
	int k;
	int i;
	int m;
	int j;

	for (k = 48; k < 58; k++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			m = k;
			for (; m < 58; m++)
			{
				for (; j < 58; j++)
				{
					putchar(k);
					putchar(i);
					putchar(' ');
					putchar(m);
					putchar(j);
					if (k != 57 || m != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
