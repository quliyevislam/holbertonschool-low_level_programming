#include "main.h"
/**
 * print_last_digit - .
 *
 * @n: .
 *
 * Return: .
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -1 * n;
	_putchar('0' + n);
	return (n);
}
