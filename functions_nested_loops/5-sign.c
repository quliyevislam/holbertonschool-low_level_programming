#include "main.h"
/**
 * print_sign - Checks if the char is lowercase.
 *
 * @n: The int.
 *
 * Return: 0 or 1
 */
int print_sign(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (1);
	if (n == 0)
		return (0);
}
