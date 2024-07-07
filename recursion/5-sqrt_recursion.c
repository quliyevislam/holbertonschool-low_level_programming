#include "main.h"
/**
 * _sqrt_r - returns the natural square root of a number.
 * @S: int.
 * @x: int.
 * Return: natural square root of a number.
 */
int _sqrt_r(int S, long x)
{
	if (x * x <= S)
		return (x);

	return (_sqrt_r(S, (x + S / x) / 2));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int.
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_r(n, n));
}
