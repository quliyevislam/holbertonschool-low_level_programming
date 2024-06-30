#include "main.h"
/**
 * print_number - prints an integer.
 *
 * @n: int.
 */
void print_number(int n)
{

int N;
	int x = 1;
	int digit;

	if (n == -2147483648)
	{
	_putchar('-');
	_putchar('2');
	n = 147483648;
	}

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	N = n;
	N = N / 10;

	while (N != 0)
	{
		N = N / 10;
		x = x * 10;
	}

	while (x != 0)
	{
		digit = n / x;
		n = n - digit * x;
		x = x / 10;
		_putchar('0' + digit);
	}
}
