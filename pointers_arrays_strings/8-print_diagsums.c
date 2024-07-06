#include "main.h"
/**
 * print_num - prints the int num.
 * @num: int.
 */
void print_num(int num)
{
	int temp;
	int rev = 0;

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
	long rev = 0;
	int temp;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sum = sum + *(a + i);
	}

	while (sum != 0)
	{
		temp = sum % 10;
		sum = sum / 10;
		rev = rev * 10 + temp;
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
