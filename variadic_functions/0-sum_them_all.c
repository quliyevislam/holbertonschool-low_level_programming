#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: number of arguments
 * * Return: The sum of the arguments or 0 if there are no arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum = 0;

	if (n == 0)
	return (0);

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		sum = sum + va_arg(ap, const unsigned int);
	}

	va_end(ap);

	return (sum);
}
