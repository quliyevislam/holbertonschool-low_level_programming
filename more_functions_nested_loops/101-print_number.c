#include "main.h"
/**
 * print_number - prints an integer.
 *
 * @n: int.
 */
void print_number(int n)
{
	int reverse = 0;
	int temp;
	int N;

	if (n == 0)
		_putchar('0');

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	N = n;

	while (n != 0)
	{
		temp = n % 10;
		n = n / 10;
		reverse  = reverse * 10 + temp;
	}

	while (reverse != 0)
	{
		temp = reverse % 10;
		reverse = reverse / 10;
		_putchar('0' + temp);
	}

	if (N % 10 == 0 && N != 0)
		_putchar('0');
}
