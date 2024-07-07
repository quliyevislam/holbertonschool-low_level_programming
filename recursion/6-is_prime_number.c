#include "main.h"
/**
 * is_prime -  if the input integer is a prime number ?
 * @n: int.
 * @k: int.
 * Return: 1 if the input integer is prime.
 */
int is_prime(int n, int k)
{
	if (n == k)
		return (1);

	if (n % k == 0)
		return (0);

	return (is_prime(n, k + 1));
}
/**
 * is_prime_number -  if the input integer is a prime number ?
 * @n: int.
 * Return: 1 if the input integer is prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}
