#include "main.h"
/**
 * print_num - prints the int num.
 * @num: int.
 */
void print_num(long num)
{
	int temp;
	long rev = 0;
	int cp = num;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}

	while (num != 0)
	{
		temp = num % 10;
		num = num / 10;
		rev = rev * 10 + temp;
	}

	while (rev != 0)
	{
		_putchar('0' + rev % 10);
		rev = rev / 10;
	}

	if (cp % 10 == 0)
		_putchar('0');
}
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: pointer to a int.
 * @size: int.
 */
void print_diagsums(int *a, int size)
{
	int i;
	long sum = 0;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sum = sum + *(a + i);
	}

	print_num(sum);

	sum = 0;
	_putchar(',');
	_putchar(' ');

	for (i = size - 1; i < size * size - size + 1; i += (size - 1))
	{
		sum = sum + *(a + i);
	}

	print_num(sum);

	_putchar('\n');
}
