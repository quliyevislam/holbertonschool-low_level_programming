#include "main.h"
/**
 * print_number - prints an integer.
 *
 * @n: int.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	unsigned int reverse = 0;
	unsigned int temp;
	unsigned int N;
	unsigned int new_n = (unsigned int)n;

	if (new_n == 0)
		_putchar('0');

	N = new_n;

	while (new_n != 0)
	{
		temp = new_n % 10;
		new_n = new_n / 10;
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
